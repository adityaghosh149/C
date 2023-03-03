#include<stdio.h>

void main() {
    int n = 0;
    int rev = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nCopy = n;
    while(n > 0) {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }
    printf("Reverse of %d is %d", nCopy, rev);
}
