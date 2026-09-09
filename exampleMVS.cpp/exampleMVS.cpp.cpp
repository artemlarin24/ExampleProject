#include <iostream>

int main() {
    std::cout << "Input side and height of triangle:  " << std::endl;
    double side;
    double h;
    std::cin >> side;
    std::cin >> h;
    double S = 0.5 * side * h;
    std::cout << S;
    return 0;
}