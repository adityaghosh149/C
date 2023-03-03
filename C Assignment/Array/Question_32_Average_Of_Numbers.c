#include <stdio.h>

int main() {
  int n, i;
  float num[100], sum = 0.0, average;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    printf("Enter element %d: ", i + 1);
    scanf("%f", &num[i]);
    sum += num[i];
  }

  average = sum / n;

  printf("Average = %.2f\n", average);

  return 0;
}
