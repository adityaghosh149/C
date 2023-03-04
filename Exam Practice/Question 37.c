#include<stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    int matrix[m][n];
    int transpose_matrix[n][m];

    printf("Enter values for matrix \n");
    for (int i = 0; i < m ; i++) {
        printf("Row %d : ", (i + 1) );
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            transpose_matrix[j][i] = matrix[i][j];
        }
    }

    printf("Transpose: \n");
    for (int i = 0; i < n ; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", transpose_matrix[i][j]);
        }
        printf("\n");
    }
}
