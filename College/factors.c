#include<stdio.h>

void main() {
    int n = 0;
    printf("Enter a number to print all its factor : ");
    scanf("%d", &n);
    for(int i = 1; i <= n / 2; i++) {
        if(n % i == 0)
            printf("%d ", i);
    }
    printf("%d", n);

    // optimised code but factor are not in increasing order
    // for(int i = 1; i * i <= n; i++) {
    //     if(n % i == 0)
    //         printf("%d %d ", i, n / i);
    // }
}
