#include<stdio.h>

int main() {
    int a, b;

    printf("Enter value of a : ");
    scanf("%d", &a);

    printf("Enter value of b : ");
    scanf("%d", &b);

    int sum = a + b;
    printf("Sum of %d and %d is %d", a, b, sum);

    return 0;
}
