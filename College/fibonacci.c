#include<stdio.h>

void main() {
    int n = 0;
    int fact = 1;
    printf("Enter value of n : ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int fib = 0;
    if(n >= 0)
        printf("1 ");
    if(n >= 1)
        printf("1 ");
    for(int i = 2; i <= n; i++) {
        fib = a + b;
        printf("%d ", fib);
        a = b;
        b = fib;
    }
}
