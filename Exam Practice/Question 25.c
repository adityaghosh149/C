#include<stdio.h>

int main() {
    char str[50] = "madam";

    int length = 0;
    int i = 0;
    while (str[i] != '/0') {
        length++;
        i++;
    }

    length = strlen(str);

    // length = sizeof(str) / sizeof(char);

    int flag = 1;
    for(int i = 0; i < length / 2; i++) {
        if(str[i] != str[length - i - 1]){
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");
}
