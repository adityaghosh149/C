#include<stdio.h>

int main() {
    // for capital 65
    // for small 97
    char letter = 97;
    for(int i = 0; i < 26; i++) {
        printf("%c ", (letter + i));
    }
}
