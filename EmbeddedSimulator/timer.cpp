#include "timer.h"

void Timer::start(int milliseconds) {
    std::cout << "Timer started for " << milliseconds << " ms.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(milliseconds));
    std::cout << "Timer expired!\n";
}
