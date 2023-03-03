#include<stdio.h>

void main() {
    int n = 0;
    printf("Enter a number to check if it is prime or not : ");
    scanf("%d", &n);
    if(n == 2) {
        printf("2 is prime");
        return;
    }
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            printf("%d is not prime", n);
            return;
        }
    }
    printf("%d is prime", n);
}
