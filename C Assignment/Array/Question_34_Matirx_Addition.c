#include <stdio.h>

int main() {
  int i, j, m, n;
  int A[100][100], B[100][100], C[100][100];

  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of the first matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Enter the elements of the second matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &B[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  printf("The sum of the two matrices is:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
