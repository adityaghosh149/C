#include <stdio.h>

void displayPrimeNumbers(int start, int end) {
  int i, j, flag;

  printf("Prime numbers between %d and %d are: ", start, end);

  for (i = start; i <= end; i++) {
    flag = 0;

    if(i <= 1)
        flag = 1;
    else {
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0) {
      printf("%d ", i);
    }
  }

  printf("\n");
}

int main() {
  int start, end;

  printf("Enter the start interval: ");
  scanf("%d", &start);

  printf("Enter the end interval: ");
  scanf("%d", &end);

  displayPrimeNumbers(start, end);

  return 0;
}
