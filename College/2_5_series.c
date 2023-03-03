#include<stdio.h>

void main() {
    int n = 0;
    int a = 2;
    int b = 5;
    int sum = 0;
    // 2, 25, 252, 2525, 25252, ........, up to n'th term
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        a = (a * 10) + b;
        b = 7 - b;
    }
}
