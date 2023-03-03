#include <stdio.h>

#define MAX_SIZE 100

int main() {
  char strOne[MAX_SIZE], strTwo[MAX_SIZE];
  int i, j;

  printf("Enter the first string: ");
  scanf("%s", strOne);

  printf("Enter the second string: ");
  scanf("%s", strTwo);

  i = 0;
  while (strOne[i] != '\0') {
    i++;
  }

  j = 0;
  while (strTwo[j] != '\0') {
    strOne[i] = strTwo[j];
    i++;
    j++;
  }

  strOne[i] = '\0';

  printf("Concatenated string: %s\n", strOne);

  return 0;
}
