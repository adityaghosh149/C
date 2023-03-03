#include<stdio.h>

void main() {
    int n = 0;
    int count = 0;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nCopy = n;
    while(n > 0) {
        n = n / 10;
        count++;
    }
    printf("%d has %d digits", nCopy, count);
}
