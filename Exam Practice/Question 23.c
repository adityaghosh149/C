#include<stdio.h>

int main() {
    char str[] = "hello";
    char copy_str[100];

    int i = 0;
    while(str[i] != '\0') {
        copy_str[i] = str[i];
        i++;
    }

    printf("%s \n", str);
    printf("%s \n", copy_str);
}
