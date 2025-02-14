#include "utils.hpp"
#include <iostream>


int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void printMessage(const std::string& message) {
    std::cout << message << std::endl;
}
