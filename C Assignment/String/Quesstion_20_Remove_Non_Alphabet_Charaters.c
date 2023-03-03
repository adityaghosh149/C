#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char str[MAX_SIZE];
  int i, j, len;

  printf("Enter a string: ");
  fgets(str, MAX_SIZE, stdin);

  len = strlen(str);

  for (i = 0, j = 0; i < len; i++) {
    if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
      str[j++] = str[i];
    }
  }

  str[j] = '\0';

  printf("String with only alphabets: %s\n", str);

  return 0;
}
