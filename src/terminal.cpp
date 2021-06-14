#include <iostream>
#include "terminal.hpp"

void clear_screen() {
    std::cout << "\x1b[2J\x1b[1;1H" << std::flush;
}