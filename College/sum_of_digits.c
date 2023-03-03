#include<stdio.h>

void main() {
    int n = 0;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nCopy = n;
    while(n > 0) {
        sum += (n % 10);
        n = n / 10;
    }
    printf("Sum of all the digits of %d is %d", nCopy, sum);
}
