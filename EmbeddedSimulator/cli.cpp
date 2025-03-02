#include "cli.h"
#include <iostream>

void CLI::start(GPIO& gpio) {
    std::string command;
    int pin, time;

    while (true) {
        std::cout << "\nEnter command (gpio_set, gpio_clear, gpio_read, timer_start, uart_send, uart_receive, exit): ";
        std::cin >> command;

        if (command == "gpio_set") {
            std::cout << "Enter GPIO pin: ";
            std::cin >> pin;
            gpio.setPin(pin);
        }
        else if (command == "gpio_clear") {
            std::cout << "Enter GPIO pin: ";
            std::cin >> pin;
            gpio.clearPin(pin);
        }
        else if (command == "gpio_read") {
            std::cout << "Enter GPIO pin: ";
            std::cin >> pin;
            std::cout << "GPIO Pin " << pin << " is " << (gpio.readPin(pin) ? "HIGH" : "LOW") << std::endl;
        }
        else if (command == "timer_start") {
            std::cout << "Enter timer duration (ms): ";
            std::cin >> time;
            Timer::start(time);
        }
        else if (command == "uart_send") {
            std::cin.ignore();
            std::string data;
            std::cout << "Enter data to send: ";
            std::getline(std::cin, data);
            UART::sendData(data);
        }
        else if (command == "uart_receive") {
            UART::receiveData();
        }
        else if (command == "exit") {
            break;
        }
        else {
            std::cout << "Invalid command. Try again.\n";
        }
    }
}
