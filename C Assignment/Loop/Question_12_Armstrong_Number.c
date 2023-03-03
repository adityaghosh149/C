#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, 3);
        originalNum /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.", num);
    } else {
        printf("%d is not an Armstrong number.", num);
    }

    return 0;
}
