#include<stdio.h>

int main() {
    int a = 12345;
    int b = 0;
    int x = a;

    while(x != 0){
        b = (b * 10) + (x % 10);
        x = x / 10;
    }

    printf("Reverse of %d is : %d", a, b);
}
