#include<stdio.h>

void main() {
    int n = 0;
    printf("Enter value of n : ");
    scanf("%d", &n);
    int sum = 0;
    int fact = 0;
    for(int i = 1; i <= (2 * n) - 1; i += 2) {
        fact *= i;
        sum += fact;
        fact *= (i + 1);
    }
    if(n == sum)
        printf("%d is perfect number", n);
    else
        printf("%d is not perfect number", n);
}
