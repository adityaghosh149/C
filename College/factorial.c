#include<stdio.h>

void main() {
    int n = 0;
    int fact = 1;
    printf("Enter value of n : ");
    scanf("%d", &n);
    if(n == 0 || n == 1)
        printf("%d! = 1", n);
    else {
        for(int i = 2; i <= n; i++) {
            fact *= i;
        }
        printf("%d! = %d", n, fact);
    }
}
