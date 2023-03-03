#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    int x, y;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    int temp;
    while (y != 0) {
        temp = x % y;
        x = y;
        y = temp;
    }

    printf("GCD of %d and %d is %d\n", a, b, x);

    return 0;
}
