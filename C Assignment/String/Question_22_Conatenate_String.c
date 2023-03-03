#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char strOne[MAX_SIZE], strTwo[MAX_SIZE];

  printf("Enter the first string: ");
  scanf("%s", strOne);

  printf("Enter the second string: ");
  scanf("%s", strTwo);

  strcat(strOne, strTwo);

  printf("Concatenated string: %s\n", strOne);

  return 0;
}
