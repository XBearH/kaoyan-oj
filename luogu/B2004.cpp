#include <iostream>
#include <iomanip>

//using function setw() with iomanip header file to set the width of the output
int main(){
    long long a, b, c;
    std::cin >> a >> b >> c;
    std::cout << std::setw(8) << a << " " << std::setw(8) << b << " " << std::setw(8) << c;
    return 0;
}