#include<stdio.h>

int main() {
    int a = 0;
    int b = 1;
    int n;
    printf("Enter value for n : ");
    scanf("%d", &n);

    if (n >= 0)
        printf("%d ", a);
    if (n >= 1)
        printf("%d ", b);
    int temp;
    for(int i = 3; i <= n; i++) {
        printf("%d ", (a + b));
        temp = a + b;
        a = b;
        b = temp;
    }
}
