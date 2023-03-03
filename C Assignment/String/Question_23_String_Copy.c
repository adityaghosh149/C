#include <stdio.h>

#define MAX_SIZE 100

int main() {
  char strOne[MAX_SIZE], strTwo[MAX_SIZE];
  int i;

  printf("Enter a string: ");
  scanf("%s", strOne);

  i = 0;
  while (strOne[i] != '\0') {
    strTwo[i] = strOne[i];
    i++;
  }

  strTwo[i] = '\0';

  printf("Copied string: %s\n", strTwo);

  return 0;
}
