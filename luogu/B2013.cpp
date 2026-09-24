#include <iostream>
#include <cstdio>

int main() {
    double f_degree, c_degree;
    scanf("%lf", &f_degree);
    c_degree = (f_degree - 32) * 5 / 9;
    printf("%.5lf", c_degree);
    return 0;
}