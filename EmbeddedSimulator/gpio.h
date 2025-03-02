#ifndef GPIO_H
#define GPIO_H

#include <iostream>
#include <unordered_map>

class GPIO {
private:
    std::unordered_map<int, bool> pins;  

public:
    GPIO();  

    void setPin(int pin);
    void clearPin(int pin);
    bool readPin(int pin);
    void printState();
};

#endif
