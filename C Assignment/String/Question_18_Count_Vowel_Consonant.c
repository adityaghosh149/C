#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char str[MAX_SIZE];
  int vowels = 0, consonants = 0, i, len;

  printf("Enter a string: ");
  fgets(str, MAX_SIZE, stdin);

  len = strlen(str);

  for (i = 0; i < len; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
      vowels++;
    } else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      consonants++;
    }
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d\n", consonants);

  return 0;
}

