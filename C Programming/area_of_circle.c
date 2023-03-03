#include<stdio.h>

int main() {
    int radius;
    printf("Enter radius of the circle : ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;
    printf("Area of the square is : %f sq. unit", area);

    return 0;
}
