#include <iostream>
#include <cstdio>

int main(){
    double r1, r2, r;
    scanf("%lf %lf", &r1, &r2);
    r = 1 / (1 / r1 + 1 / r2);
    printf("%.2lf\n", r);
    return 0;
}