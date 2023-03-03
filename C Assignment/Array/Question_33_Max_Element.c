#include <stdio.h>

int main() {
  int n, i;
  int num[100];

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%d", &num[i]);
  }

  int max = num[0];

  for (i = 1; i < n; i++) {
    if (num[i] > max) {
      max = num[i];
    }
  }

  printf("Largest element = %d\n", max);

  return 0;
}

