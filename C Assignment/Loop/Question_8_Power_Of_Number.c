#include <stdio.h>
#include <math.h>

int main() {
    int base, exponent;
    double result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = pow(base, exponent);

    printf("%d^%d = %lf", base, exponent, result);

    return 0;
}
