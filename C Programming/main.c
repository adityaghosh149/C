#include <stdio.h>

int main() {
    // variables
    // -> variables is the name of a memory location which stores data

    // variable does not have fixed value it can be changed

    // rule of naming a variable
    // -> variables are case-sensitive
    // -> 1st character is alphabet or '_'
    // -> no comma/ black space
    // -> no other symbol other than '_'

    int  number = 25;
    char star = '*';
    int age = 20;
    int _age = 20;
    float pi = 3.14;
    int a = 20;
    int A = 30;
    int final_price = 2200;

    // types of variables
    // -> int
    // -> char
    // -> float
    // -> double

    // datatype                       size in byte
    // char or signed char                  1
    // unsigned char                        1
    // int or signed int                    2
    // unsigned int                         2
    // short int or unsigned short int      2
    // signed short int                     2
    // long int or signed long int          4
    // unsigned long int                    4
    // float                                4
    // double                               8
    // long double                          10

    int roll = 23;
    float e = 2.718;
    char letter = 'a';

    // constants
    // -> values that don't change

    // types of constants
    // -> integer constants 1, 2, 3, 0, -1, -2
    // -> real constants 1.0, 2.0, 3.14, -24
    // -> character constant 'a', 'b', 'A', '#', '&'

    // keywords
    // -> reserved words that have special meaning and function to the compiler

    // all 32 keywords
    // auto, double, int, struct
    // break, else, long, switch
    // case, enum, register, typedef
    // char, extern, return, union
    // continue, for, signed, void
    // do, if, static, while
    // default, goto, sizeof, volatile
    // const, float, short, unsigned

    // #include<stdio.h> -> preprocessor directive
    //
    // int main() { -> main function (program stats running from here )
    //      printf("Hello World"); -> program body
    //      return 0; ->returning value to the function
    // }

    // comments
    // -> comments are used to explain or describe function of a block
    // of code or function. comments are ignored by the compiler

    // this is a example of a single line comment

    /*
     This
     is
     an
     example
     of
     multiline
     comment
     */

    // output
    // -> for output in console in C we use printf()
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");
    printf("Hello C \n");


    // printing variable in printf()
    int integer = 10;
    printf("Value of integer : %d \n", integer);

    char character = 'C';
    printf("Value of character : %c \n", character);

    float g = 9.8;
    printf("Value of g : %f \n", g);


    // input
    // -> for input from console we use scanf();

    int x;
    printf("Enter value for x : ");
    scanf("%d", &x);
    printf("You entered %d", x);

    return 0;
}


