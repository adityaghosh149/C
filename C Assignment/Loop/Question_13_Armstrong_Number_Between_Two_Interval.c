#include <stdio.h>
#include <math.h>

int main() {
    int lower, upper, i, originalNum, remainder, digits = 0, result = 0;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &lower, &upper);

    printf("Armstrong numbers between %d and %d are: ", lower, upper);

    for (i = lower + 1; i < upper; ++i) {
        originalNum = i;
        digits = 0;
        result = 0;

        originalNum = i;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, 3);
            originalNum /= 10;
        }

        if (result == i) {
            printf("%d ", i);
        }
    }

    return 0;
}
