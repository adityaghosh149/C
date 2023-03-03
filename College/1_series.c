#include<stdio.h>

void main() {
    int n = 0;
    int a = 1;
    // 1, 11, 111, 1111, 11111, ........, up to n'th term
    printf("Enter value of n : ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", a);
        a = (a * 10) + 1;
    }
}
