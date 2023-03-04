#include<stdio.h>

int main() {
    char str[50];
    int freq[256] = {0};
    printf("Enter a String : ");
    scanf("%s", str);
    // fgets(str, 50, stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Frequency of each character in string \n");

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0)
            printf("%c occurs %d times \n", i, freq);
    }
}
