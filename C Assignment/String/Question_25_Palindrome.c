#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
  char str[MAX_SIZE];
  int i, length, flag = 0;

  printf("Enter a string: ");
  scanf("%s", str);

  length = strlen(str);

  for (i = 0; i < length / 2; i++) {
    if (str[i] != str[length - i - 1]) {
      flag = 1;
      break;
    }
  }

  if (flag == 1) {
    printf("%s is not a palindrome\n", str);
  } else {
    printf("%s is a palindrome\n", str);
  }

  return 0;
}
