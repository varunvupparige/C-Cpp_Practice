#include "PIDwithOOPs.hpp"

PID::PID(double kp, double ki, double kd, double actuator_min, double actuator_max, double filter_freq, double prev_error)
        : Kp(kp), Ki(ki), Kd(kd),
          actuator_min(actuator_min),actuator_max(actuator_max),
          filter_freq(filter_freq),prev_error(prev_error),
          prev_intg(0.0), meas_filt(0.0), intg_term(0.0), derv_term(0.0) {}

double PID::low_pass(double measurement, double prev_output) {
    double alpha = (2*PI*filter_freq)/(2*PI*filter_freq + Fs);
    return (alpha*measurement + (1-alpha)*prev_output);
}

double PID::pid_update(double setpoint, double measurement, double dt) {
    
    meas_filt = low_pass(measurement, meas_filt);
    error = setpoint - meas_filt;

    prop_term = Kp*error;
    intg_term = prev_intg + Ki*(error)*dt;
    derv_term = Kd*low_pass((error - prev_error)/dt, derv_term);

    pid_cmd = prop_term + intg_term + derv_term;

    if ((pid_cmd > actuator_max && pid_cmd*error > 0) || (pid_cmd < actuator_min && pid_cmd*error <0)) {
        intg_term = prev_intg;
        pid_cmd = prop_term + intg_term + derv_term;
    }

    if (pid_cmd > actuator_max) {
        pid_cmd = actuator_max;
    }
    else if (pid_cmd < actuator_min) {
        pid_cmd = actuator_min;
    }

    prev_intg = intg_term;
    prev_error = error;

    return pid_cmd;
}

