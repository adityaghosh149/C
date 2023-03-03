#include<stdio.h>

int main() {
    double firstNumber, secondNumber;
    char oper;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &oper);

    switch (oper) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf", firstNumber, secondNumber, firstNumber + secondNumber);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf", firstNumber, secondNumber, firstNumber - secondNumber);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf", firstNumber, secondNumber, firstNumber * secondNumber);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf", firstNumber, secondNumber, firstNumber / secondNumber);
            break;
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
