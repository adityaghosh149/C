#include<stdio.h>

int main() {
    int n;

    printf("Enter number of rows/columns : ");
    scanf("%d", &n);

    int matrix[n][n];
    int total = 0;

    printf("Enter values for matrix \n");
    for (int i = 0; i < n ; i++) {
        printf("Row %d : ", (i + 1) );
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < n ; i++) {
        total = total + matrix[i][i] + matrix[i][n - i - 1];
    }

    if(n % 2 == 1)
        total = total - matrix[n/2][n/2];

    printf("Sum of diagonal of the matrix is : %d", total);
}
