#include<stdio.h>
#include<string.h>

int main() {
    char str_one[50];
    char str_two[50];
    char result[100];

    printf("Enter first string : ");
    scanf("%s", str_one);

    printf("Enter second string : ");
    scanf("%s", str_two);

    int x = 0;
    int i = 0;
    while(str_one[i] != '\0'){
        result[x] = str_one[i];
        x++;
        i++;
    }

    i = 0;
    while(str_two[i] != '\0'){
        result[x] = str_two[i];
        x++;
        i++;
    }

    printf("\n");
    printf("%s \n", str_one);
    printf("%s \n", str_two);
    printf("%s \n", result);
}
