#include <stdio.h>

int checkPrime(int n) {
  int i;

  for (i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return 0;
    }
  }

  return 1;
}

int main() {
  int num;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  if (checkPrime(num)) {
    printf("%d is a prime number.\n", num);
  } else {
    printf("%d is not a prime number.\n", num);
  }

  return 0;
}
