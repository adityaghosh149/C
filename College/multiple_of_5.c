#include<stdio.h>

void main() {
    int n = 0;
    // 5, 10, 15, 20, 25, 30, ........, up to n'th term
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        printf("%d ", 5 * i);
}
