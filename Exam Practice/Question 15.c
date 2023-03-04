#include<stdio.h>

int main() {
    int n = 5;
    int s;
    for(int i = 1; i <= n ; i++) {
        s = n - i;
        for(int j = 1; j <= (2 * i) - 1 + s; j++) {
            if(j <= s)
                printf("  ");
            else
                printf("* ");
        }
        printf("\n");
    }
}
