#include<stdio.h>

// call by value
void square(int n) {
    n = n * n;
    printf("square : %d \n", n);
}

// call bt reference
void _square(int *n) {
    *n = *n * *n;
    printf("square : %d \n", *n);
}

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}

void calc(int a, int b, int *sum, int *prod, int *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2;
}

int main() {
    // pointer
    // -> a variable that stores the memory address of another variable

    // you have to create pointer of that data type of which address you want to store
    int a = 10;
    int *ptr = &a;

    // * -> value at address operator
    // & -> address of operator

    printf("a : %d \n", a);
    printf("ptr : %p \n", ptr);
    printf("*ptr : %d \n", *ptr);

    int x;
    int *x_ptr;

    ptr = &x;
    *ptr = 0;  // x : 0, *ptr : 0

    printf("x : %d \n", x);
    printf("*ptr : %d \n", x);

    *ptr += 5; // x : 5, *ptr : 5

    printf("x : %d \n", x);
    printf("*ptr : %d \n", x);

    (*ptr)++;  // x : 6, *ptr : 6

    printf("x : %d \n", x);
    printf("*ptr : %d \n", x);

    // pointer to pointer
    // -> a variable that stores the memoru address tof another pointer

    int i = 25;
    int *i_ptr = &i;
    int **i_pptr = &i_ptr;

    printf("i (**i_pptr): %d \n", **i_pptr);

    int num = 6;
    square(num);
    printf("number : %d \n", num);

    _square(&num);
    printf("number : %d \n", num);


    int m = 3, n = 5;

    printf("m : %d, n : %d \n", m, n);
    swap(&m, &n);
    printf("after swapping \n");
    printf("m : %d, n : %d \n", m, n);

    int one = 2;
    int two = 5;
    int sum, prod, avg;

    printf("one : %d, two : %d \n", one, two);
    calc(one, two, &sum, &prod, &avg);
    printf("sum : %d, product : %d, average: %d \n", sum, prod, avg);

    return 0;
}


