#include <iostream>

int main() {
    float a, b, c, d,e;
    std::cout << "Enter Five(5) numbers :" << std::endl;
    std::cin >> a >> b >> c >> d >> e;

    float mean = (a+b+c+d+e)/5;
    std::cout << "The mean of the numbers ";  std::cout << mean;
}