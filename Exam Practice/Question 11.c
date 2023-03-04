#include<stdio.h>

int main() {
    int a = 1;
    int b = 100;
    int flag;

    for(int i = a; i <= b; i++) {
        flag = 1;
        if(i < 2)
            continue;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0){
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }
}
