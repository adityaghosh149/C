#include<stdio.h>

int GCD(int a, int b) {
    if(a % b == 0)
        return b;
    int temp = b;
    b = a % b;
    a = temp;
    GCD(a, b);
}


int main () {
    int a = 225;
    int b = 50;

    printf("GCD of %d and %d is : %d", a, b, GCD(a, b));
}
