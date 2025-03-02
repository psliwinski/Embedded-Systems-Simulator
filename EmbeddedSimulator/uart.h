#ifndef UART_H
#define UART_H

#include <iostream>
#include <string>

class UART {
public:
    static void sendData(const std::string& data);
    static void receiveData();
};

#endif
