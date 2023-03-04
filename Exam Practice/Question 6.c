#include<stdio.h>

int main() {
    int a = 12345;
    int x = a;
    int count = 0;
    while(x != 0) {
        x = x / 10;
        count++;
    }

    printf("Number of digit in integer %d is : %d", a, count);
}
