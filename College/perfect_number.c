#include<stdio.h>

void main() {
    int n = 0;
    printf("Enter a number to check if it is a perfect number or not : ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0)
            sum += (i + (n / i));
    }
    if(n == sum)
        printf("%d is perfect number", n);
    else
        printf("%d is not perfect number", n);
}
