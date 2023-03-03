#include <stdio.h>

int main() {
  int i, j, m, n;
  int A[100][100], B[100][100];

  printf("Enter the number of rows and columns of the matrix: ");
  scanf("%d%d", &m, &n);

  printf("Enter the elements of the matrix:\n");
  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d", &A[i][j]);
    }
  }

  for (i = 0; i < m; i++) {
    for (j = 0; j < n; j++) {
      B[j][i] = A[i][j];
    }
  }

  printf("The transpose of the matrix is:\n");
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      printf("%d ", B[i][j]);
    }
    printf("\n");
  }

  return 0;
}
