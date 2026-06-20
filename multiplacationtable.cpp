#include <iostream>

int main() {
    int number;
    int times;
    std::cout << "What number you want to multiply? ";
    std::cin >> number;
    std::cout << "How many times you want to multiply it? ";
    std::cin >> times;
    int counter = 1;
    std::cout << "Multiplication Table for " << number << ":" << std::endl;
    while (counter <= times) {
        int result = number * counter;
        std::cout << number << " x " << counter << " = " << result << std::endl;
        counter++;
    }
    return 0;
}