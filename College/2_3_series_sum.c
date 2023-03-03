#include<stdio.h>

void main() {
    int n = 0;
    int a = 2;
    int b = 3;
    int sum = 0;
    // 2, 23, 232, 2323, 23232, ........, sum up to n'th term
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        sum += a;
        a = (a * 10) + b;
        b = 5 - b;
    }
    printf("Sum of the series up to %d term is : %d", n, sum);
}
