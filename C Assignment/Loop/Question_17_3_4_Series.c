#include <stdio.h>

int main() {
    int n, num = 0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            num = num * 10 + 4;
        else
            num = num * 10 + 3;
        if(i != n)
            printf("%d, ", num);
        else
            printf("%d", num);
    }

    return 0;
}
