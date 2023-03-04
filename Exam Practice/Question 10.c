#include<stdio.h>

int main() {
    int n = 2;
    int flag = 1;
    if (n < 2) {
        printf("%d is not a prime", n);
    }
    else {
        for(int i = 2; i * i <= n; i++) {
            if(n % 1 == 0){
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d is a prime", n);
        else
            printf("%d is not a prime", n);
    }



}
