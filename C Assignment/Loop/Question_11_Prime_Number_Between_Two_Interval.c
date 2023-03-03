#include <stdio.h>

 main() {
    int lower, upper, i, isPrime;
    printf("Enter lower and upper limit: ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    for (i = lower + 1; i < upper; i++) {
        isPrime = 1;
        if(i <= 1)
            isPrime = 0;
        else {
            for(int j = 2; j * j <= i; j++){
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        if (isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
