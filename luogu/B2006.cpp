#include <iostream>
#include <cstdio>

//I used to use 'long long' and 'int'.However, I found that the result of the calculation may be a decimal number, so I changed it to 'double'.
int main(){
    double x, a, y, b;
    std::cin >> x >> a >> y >> b;
    double result = ( y * b - x * a ) / (b - a);
    //std::cout << ( y * b - x * a ) / (b - a) << std::endl;
    printf("%.2f", result);
    return 0;
}