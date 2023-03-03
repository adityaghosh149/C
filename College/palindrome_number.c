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
    if(nCopy == rev)
        printf("%d is palindrome number", nCopy);
    else
        printf("%d is not palindrome number", nCopy);
}
