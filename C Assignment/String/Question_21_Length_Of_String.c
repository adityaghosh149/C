#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char str[MAX_SIZE];
  int len = 0, i;

  printf("Enter a string: ");
  fgets(str, MAX_SIZE, stdin);

  i = 0;
  while (str[i] != '\n' && str[i] != '\0') {
    len++;
    i++;
  }

  printf("Length of the string: %d\n", len);

  return 0;
}

