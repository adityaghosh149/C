#include<stdio.h>

int main() {
    int a = -12321;
    int b = 0;
    int x = a;

    if (a < 0){
        printf("%d is not a palindrome", a);
    }
    else {
        while(x != 0) {
            b = (b * 10) + (x % 10);
            x = x / 10;
        }

        if(a == b)
            printf("%d is a palindrome", a);
        else
            printf("%d is not a palindrome", a);
    }
}
