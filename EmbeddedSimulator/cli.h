#ifndef CLI_H
#define CLI_H

#include "gpio.h"
#include "timer.h"
#include "uart.h"

class CLI {
public:
    static void start(GPIO& gpio);
};

#endif
