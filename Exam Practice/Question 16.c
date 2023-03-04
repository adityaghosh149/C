#include<stdio.h>

int main() {
    int option = 0;
    int decimal = 0;
    int binary = 0;
    printf("Choose an option \n");
    printf("1. Binary to Deciamal \n");
    printf("2. Decimal to Binary \n");
    scanf("%d", &option);

    if(option == 1) {
        printf("Enter a binary value : ");
        scanf("%d", &binary);

        int i = 1;
        int x = binary;
        int remainder;
        while(x > 0) {
            remainder = x % 10;
            if(remainder <= 1) {
                decimal += remainder * i;
                i = i * 2;
                x = x / 10;
            }
            else {
                printf("You entered a non-binary number");

                return 0;
            }
        }
        printf("Binary(%d) = Decimal(%d)", binary, decimal);
    }

    else if( option == 2) {
        printf("Enter a decimal value : ");
        scanf("%d", &decimal);
        int x = decimal;
        while(x != 0) {
            binary = (binary * 10) + (x % 2);
            x = x / 2;
        }

        printf("Decimal(%d) = Binary(%d)", decimal, binary);
    }
    else {
        printf("You have choosen wrong option");
    }


}
