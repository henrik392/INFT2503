#include <iostream>

int main() {
    double number = 42;
    double *ptr = &number;
    double &ref = number;

    std::cout << "Tre måter å få verdien til `number`: " << std::endl;
    std::cout << "1. Direkte: " << number << std::endl;
    std::cout << "2. Gjennom peker: " << *ptr << std::endl;
    std::cout << "3. Gjennom referanse: " << ref << std::endl;

    return 0;
}