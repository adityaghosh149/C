#include<stdio.h>

int main() {
    int side;
    printf("Enter side of the square : ");
    scanf("%d", &side);

    int area = side * side;
    printf("Area of the square is : %d sq. unit", area);

    return 0;
}
