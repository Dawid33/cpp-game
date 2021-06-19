#include <iostream>

#ifdef __linux__
void clear_screen() {
    std::cout << "\x1b[2J\x1b[1;1H" << std::flush;
}
#endif
#if _WIN32
void clear_screen() {
    std::cout << "\x1b[2J\x1b[1;1H" << std::flush;
}
#endif
void print_err(std::string err) {
    std::cerr << err << std::endl;
}