// This state machine has two states: waiting and driving; the transition is dependent on distance of ego car from an obstable

#include <iostream>
#include <cmath>

#define N 10 //no of time stamps
#define THD 20 //distance threshold


// function prototypes
void (*state)(double);
void driving(double distance);
void waiting(double distance);
void forward();
void stop();

void forward() {
    std::cout << "Moving Forward \n";
}

void stop() {
    std::cout << "Stopped \n";
}

void driving(double distance) {
    forward();
    if (distance < THD) {
        state = waiting;
    }
}

void waiting(double distance) {
    stop();
    if (distance > THD) {
        state = driving;
    }
}

int main() {
    state = driving;
    double distance[N] = {0};   

    for (int i = 0; i < N; ++i) {
        distance[i] = 15 + 10*sin(i*0.1);
        state(distance[i]);
    }
}

