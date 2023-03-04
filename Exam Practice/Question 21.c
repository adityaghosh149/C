#include<stdio.h>

int main() {
    char str[] = "Hello World!";
    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
        length++;

    printf("Length of the string \"%s\" is : %d", str, length);
}
