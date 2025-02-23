#include <stdio.h>

typedef struct {

    float Kp;
    float Ki;
    float Kd;
    float T; //time step
    float prev_command;
    float prev_error;
    float prop_term;
    float integral_term;
    float derivative_term;
}PID;

float PID_command(PID *ctrl,float set_point,float measurement) {

    float error = set_point - measurement;
    ctrl->prop_term = ctrl->Kp*error;
    ctrl->integral_term += ctrl->Ki*error*ctrl->T;
    ctrl->derivative_term = (error-ctrl->prev_error)/ctrl->T;
    float command = ctrl->prop_term + ctrl->integral_term + ctrl->derivative_term;
    return command;

}