#include<stdio.h>

int is_prime(int n) {
    int flag = 1;
    if(n < 2)
        return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            flag = 0;
            return flag;
        }
    }
    return flag;
}

int main() {
    int n = 2;

    if(is_prime(n) == 1)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);
}
