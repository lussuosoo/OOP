#include <iostream>
#include "utils.hpp"

int main() {
    int sum = add(3, 4);
    std::cout << "Сумма: " << sum << std::endl;

    int product = multiply(3, 4);
    std::cout << "Произведение: " << product << std::endl;

    printMessage("Привет, мир!");

    return 0;
}
