#include<stdio.h>

int main() {
    int a = 152;
    int x = a;
    int b = 0;

    while(x != 0) {
        b = b + ((x % 10) * (x % 10) * (x % 10));
        x = x / 10;
    }

    if (a == b)
        printf("%d is an armstrong number", a);
    else
        printf("%d is not an armstrong number", a);
}
