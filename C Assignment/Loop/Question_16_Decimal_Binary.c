#include <stdio.h>
#include <math.h>

int main() {
    int choice, binary, decimal, i, remainder, base = 1, invalid = 0;
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &binary);
        decimal = 0;
        i = 0;
        while (binary != 0) {
            remainder = binary % 10;
            if(remainder != 0 && remainder != 1){
                invalid = 1;
                break;
            }
            binary /= 10;
            decimal += remainder * pow(2, i);
            ++i;
        }
        if(invalid == 1)
            printf("Invalid binary number!");
        else
            printf("Decimal equivalent: %d\n", decimal);
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        binary = 0;
        base = 1;
        while (decimal > 0) {
            binary += (decimal % 2) * base;
            decimal /= 2;
            base *= 10;
        }
        printf("Binary equivalent: %d\n", binary);
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
