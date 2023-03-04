#include<stdio.h>

int main() {
    int n = 7;
    int sum = 7;
    int x = 3;
    int num = 0;

    for(int i = 1; i <= n; i++) {
        num = (num * 10) + x;
        x = sum - x;
        printf("%d ", num);
    }
}
