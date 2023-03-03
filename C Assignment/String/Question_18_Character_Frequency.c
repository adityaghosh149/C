#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char str[MAX_SIZE];
  int freq[256] = {0};
  int i, len;

  printf("Enter a string: ");
  fgets(str, MAX_SIZE, stdin);

  len = strlen(str);

  for (i = 0; i < len; i++) {
    freq[(int) str[i]]++;
  }

  printf("Frequency of all characters in the given string: \n");
  for (i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      printf("'%c' = %d\n", (char) i, freq[i]);
    }
  }

  return 0;
}
