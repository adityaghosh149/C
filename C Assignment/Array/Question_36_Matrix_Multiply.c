#include <stdio.h>

void multiply(int m1[][100], int m2[][100], int result[][100], int r1, int c1, int c2) {
  int i, j, k;

  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      result[i][j] = 0;
      for (k = 0; k < c1; k++) {
        result[i][j] += m1[i][k] * m2[k][j];
      }
    }
  }
}

int main() {
  int m1[100][100], m2[100][100], result[100][100];
  int r1, c1, r2, c2, i, j;

  printf("Enter the number of rows and columns of matrix 1: ");
  scanf("%d%d", &r1, &c1);

  printf("Enter the elements of matrix 1:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      scanf("%d", &m1[i][j]);
    }
  }

  printf("Enter the number of rows and columns of matrix 2: ");
  scanf("%d%d", &r2, &c2);

  if (c1 != r2) {
    printf("The number of columns of matrix 1 must be equal to the number of rows of matrix 2.\n");
    return 0;
  }

  printf("Enter the elements of matrix 2:\n");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      scanf("%d", &m2[i][j]);
    }
  }

  multiply(m1, m2, result, r1, c1, c2);

  printf("The product of the two matrices is:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      printf("%d ", result[i][j]);
    }
    printf("\n");
  }

  return 0;
}
