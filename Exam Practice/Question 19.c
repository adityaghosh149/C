#include<stdio.h>

int main() {
    char str[50];
    int vowel = 0;
    int consonant = 0;
    printf("Enter a String : ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'
           || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++;
        }
        else if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')) {
            consonant++;
        }
    }

    printf("Number of vowel : %d \n", vowel);
    printf("Number of consonant : %d", consonant);
}
