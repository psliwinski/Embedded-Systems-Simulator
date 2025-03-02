#include "gpio.h"
#include "cli.h"

int main() {
    GPIO gpio;
    CLI::start(gpio);
    return 0;
}
