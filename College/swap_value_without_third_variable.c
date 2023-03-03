#include<stdio.h>

int main () {
    int a = 0;
    int b = 0;
    printf("Enter value of a : ");
    scanf("%d", &a);
    printf("Enter value of b : ");
    scanf("%d", &b);
    int temp = a;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Value of a : %d", a);
    printf("\nValue of b : %d", b);
    return 0;
}
