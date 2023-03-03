#include<stdio.h>

void main() {
    int n = 0;
    // 1
    // 1 2
    // 1 2 3
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
}
