#include<stdio.h>

void main() {
    int n = 0;
    int a = 1;
    int inc = 2;
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("%d ", 1 + (i * (i + 1)));
    }
}
