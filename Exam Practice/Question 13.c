#include<stdio.h>

int main() {
    int m = 1;
    int n = 10000;
    int x;
    int y;

    for (int i = m; i <= n; i++) {
        x = i;
        y = 0;
        while(x != 0) {
            y = y + ((x % 10) * (x % 10) * (x % 10));
            x = x / 10;
        }

        if (i == y)
            printf("%d ", i);
    }
}
