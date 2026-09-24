#include <iostream>
#include <cstdio>

int main() {
    double r, d, c, s;
    const double pi = 3.14159;
    scanf("%lf", &r);
    d = 2 * r;
    c = 2 * pi * r;
    s = pi * r * r;
    printf("%.4lf %.4lf %.4lf\n", d, c, s);
    return 0;
}