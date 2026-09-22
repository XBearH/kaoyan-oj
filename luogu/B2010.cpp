#include <iostream>

int main() {
    int a, b;
    int c, d;
    std::cin >> a >> b;
    c = a / b;
    d = a % b;
    std::cout << c << " " << d << std::endl;
    return 0;
}