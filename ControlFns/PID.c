#include <stdio.h>
#include <math.h>

#define TIMESTEP 0.002

typedef struct {

    float kp;
    float ki;
    float kd;
    float prev_error;
    float cmd_limit;
    float prop_term;
    float intg_term;
    float prev_intg_term;
    float pid_cmd;
    float derv_term;
} PID;

PID* gen_pid_cmd(float measurement, float reference, PID *cals) {

    float error = reference - measurement;

    cals->prop_term = cals->kp * error;
    
    if ((cals->pid_cmd > cals->cmd_limit && error > 0) ||
    (cals->pid_cmd < -cals->cmd_limit && error < 0)) {
        cals->intg_term = cals->prev_intg_term;      
    }
    else {
        cals->intg_term += cals->ki *(error)*TIMESTEP;
        cals->prev_intg_term = cals->intg_term;
    }
        
    cals->derv_term = cals->kd *(error - cals->prev_error)/TIMESTEP;

    cals->pid_cmd = cals->prop_term + cals->intg_term + cals->derv_term;

    cals->prev_error = error;

    // Clamp final output
    if (cals->pid_cmd > cals->cmd_limit) cals->pid_cmd = cals->cmd_limit;
    if (cals->pid_cmd < -cals->cmd_limit) cals->pid_cmd = -cals->cmd_limit;
    

    return cals;
}