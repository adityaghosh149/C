#include<stdio.h>
#include<string.h>

int main() {
    char str_one[] = "hello";
    char str_two[] = "world";
    char result[100] = {};

    strcat(result, str_one);
    strcat(result, str_two);

    printf("%s \n", str_one);
    printf("%s \n", str_two);
    printf("%s \n", result);
}
