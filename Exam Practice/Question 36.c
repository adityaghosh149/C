#include<stdio.h>

int main() {
    int m, n;

    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    int matrix_one[m][n];
    int matrix_two[m][n];
    int result_matrix[m][n];

    printf("Enter value for matrix one \n");
    for (int i = 0; i < m ; i++) {
        printf("Row %d : ", (i + 1) );
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_one[i][j]);
        }
    }

    printf("Enter value for matrix two \n");
    for (int i = 0; i < m ; i++) {
        printf("Row %d : ", (i + 1) );
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix_two[i][j]);
        }
    }

    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            result_matrix[i][j] = matrix_one[i][j] + matrix_two[i][j];
        }
    }

    printf("Sum of two matrix is : \n");
    for (int i = 0; i < m ; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result_matrix[i][j]);
        }
        printf("\n");
    }
}
