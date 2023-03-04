#include<stdio.h>

int sum_upto_n(n) {
    if (n == 0)
        return 0;
    return n + sum_upto_n(n - 1);
}

int main() {
    int n = 10;
    printf("Sum from 1 to %d is : %d", n, sum_upto_n(n));
}
