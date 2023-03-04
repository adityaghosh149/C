#include<stdio.h>

int main() {
    int base = 2;
    int pow = 10;
    int result = 1;

    for(int i = 1; i <= pow; i++) {
        result *= base;
    }

    printf("%d ^ %d = %d", base, pow, result);
}
