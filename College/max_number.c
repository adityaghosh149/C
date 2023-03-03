#include<stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    int max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("Maximum number between three number is : %d", max);
    return 0;
}
