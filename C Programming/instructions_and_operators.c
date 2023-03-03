#include<stdio.h>

int main() {
    // instructions
    // -> instructions are statements in a program

    // types of instruction
    // -> type declaration instruction
    // -> arithmetic instruction
    // -> control instruction

    // type declaration instruction (declare variable before using it)
    int a = 20;
    int b = a;
    int c = a + b;
    printf("%d %d %d \n", a, b, c);

    // this is invalid because years is used before is has declared
    // int oldAge = 22;
    // int newAge = oldAge + years;
    // int years = 2;
    // printf("New age : %d", newAge);

    int x, y, z;
    x = y = z = 10;
    printf("%d %d %d", x, y, z);

    // arithmetic instructions

    // a + b
    // a -> operand 1
    // b -> operand 2
    // + -> operator

    // arithmetic operators
    // + -> addition
    // - -> subtraction
    // * -> multiplication
    // / -> division
    // % -> modulo(remainder)


    return 0;
}
