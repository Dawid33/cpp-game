#include "main.hpp"
#include "terminal.hpp"
#include <iostream>

int main() {
    int x = add(2,3);
    std::cout << "Hello, World!" << std::endl;
    clear_screen();
    return 0;
}

int add(int a, int b) {
    return a + b;
}