#include "gpio.h"

GPIO::GPIO() {
    for (int i = 0; i < 10; i++) {
        pins[i] = false;
    }
}

void GPIO::setPin(int pin) {
    pins[pin] = true;
    std::cout << "GPIO Pin " << pin << " set to HIGH.\n";
}

void GPIO::clearPin(int pin) {
    pins[pin] = false;
    std::cout << "GPIO Pin " << pin << " set to LOW.\n";
}

bool GPIO::readPin(int pin) {
    return pins[pin];
}

void GPIO::printState() {
    std::cout << "GPIO Pin States: ";
    for (const auto& pin : pins) {
        std::cout << "[Pin " << pin.first << ": " << (pin.second ? "HIGH" : "LOW") << "] ";
    }
    std::cout << std::endl;
}
