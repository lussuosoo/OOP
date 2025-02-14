#include <iostream>
#include "utils.hpp"

int main() {
    int result = add(3, 4);
    std::cout << "Результат сложения: " << result << std::endl;

    printMessage("Привет, мир!");
    return 0;
}
