#ifndef TIMER_H
#define TIMER_H

#include <iostream>
#include <thread>
#include <chrono>

class Timer {
public:
    static void start(int milliseconds);
};

#endif
