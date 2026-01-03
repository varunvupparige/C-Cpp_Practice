#pragma once

#include <stdio.h>

#define Fs 1000
#define PI 3.14

class PID {

    private:
        double Kp;
        double Ki;
        double Kd;
        double actuator_min;
        double actuator_max;
        double filter_freq;

        double prop_term;
        double intg_term;
        double derv_term;
        double pid_cmd;
        double error;
        double prev_error;
        double prev_intg;
        double meas_filt;

    public:
        PID(double kp, double ki, double kd, double actuator_min, double actuator_max, double filter_freq, double prev_error);
        double pid_update(double setpoint, double measurement, double dt);
        double low_pass(double measurement, double prev_output);
};