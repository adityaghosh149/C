#include <stdio.h>

int main() {
    int a, b, lcm;
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

    lcm = (a * b) / x;

    printf("The LCM of %d and %d is %d.", a, b, lcm);

    return 0;
}
