#include<stdio.h>

int main() {
    int a = 275;
    int b = 50;

    int x = a;
    int y = b;
    int temp;

    while(x % y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    printf("GCD of %d and %d is : %d", a, b, y);
}
