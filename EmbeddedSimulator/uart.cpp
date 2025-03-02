#include "uart.h"

void UART::sendData(const std::string& data) {
    std::cout << "Sending data via UART: " << data << std::endl;
}

void UART::receiveData() {
    std::string input;
    std::cout << "Enter data to receive via UART: ";
    std::getline(std::cin, input);
    std::cout << "Received data: " << input << std::endl;
}
