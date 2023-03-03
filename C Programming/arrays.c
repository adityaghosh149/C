#include<stdio.h>

void print_array(int *array, int n) {
    for(int i = 0; i < n; i++) {
        printf("array[%d] : %d \n", i, *(array + i));
    }
}

void reverse(int array[]) {
    int length = sizeof(array) / sizeof(int);
    for(int i = 0; i < length / 2; i++) {
        int temp = array[i];
        array[i] = array[length - i - 1];
        array[length - i - 1] = temp;
    }
}

int count_odd(int array[]) {
    int count = 0;
    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        if(array[i] % 2 != 0)
            count++;
    }
    return count;
}

int* fibonacci(int n) {
    int fibo[n];
    for(int i = 0; i < n; i++) {
        if (i < 2)
            fibo[i] = i;
        else
            fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo;
}

int* store_table() {
    int table[2][10];
    for(int i = 0; i < 2; i++) {
        for(int j = 1; j <= 10; j++)
            table[i][j] = (i + 2) * j;
    }
    return table;
}

int main() {
    // arrays
    // -> collection of similar data types stored at continuous
    // memory locations

    int marks[3];

    printf("Enter marks of Physics : ");
    scanf("%d", &marks[0]);
    printf("Enter marks of Chemistry : ");
    scanf("%d", &marks[1]);
    printf("Enter marks of Mathematics : ");
    scanf("%d", &marks[2]);

    printf("Physics : %d, Chemistry : %d, Mathematics : %d \n", marks[0], marks[1], marks[2]);

    float price[3];
    for(int i = 0; i < 3; i++) {
        printf("Enter price %d : ", (i + 1));
        scanf("%f", &price[i]);
    }

    for(int i = 0; i < 3; i++) {
        printf("Final Price %d : %.2f \n", (i + 1), (price[i] * 1.18));
    }

    // all 3 below syntax is valid
    int numbers_one[5];
    int numbers_two[] = {10, 20, 30, 40, 50};
    int numbers_three[5] = {10, 20, 30, 40, 50};



    // pointer arithmatic
    // 1. pointers can be subtracted
    // 2. pointers can be compared
    int age_one = 20;
    int age_two = 22;
    int *age_ptr_one = &age_one;
    int *age_ptr_two = &age_two;

    printf("age pointer one : %u \n", age_ptr_one);
    printf("age pointer two : %u \n", age_ptr_two);

    printf("difference of two pointer : %d \n", age_ptr_two - age_ptr_one);
    if(age_ptr_one < age_ptr_two) {
        printf("pointer one is smaller than pointer two \n");
    } else {
        printf("pointer one is greater than pointer two \n");
    }
    // traversing array using pointer
    int numbers[] = {5, 10, 15, 20, 25, 30, 35, 40, 50};
    int *number_ptr = numbers;
    for(int i = 0; i < 9; i++) {
        printf("numbers[%d] : %d \n", i, *number_ptr);
        number_ptr++;
    }

    int aadhar[5];
    int *aadhar_ptr = &aadhar;

    for(int i = 0; i < 5; i++) {
        printf("Aadhar number %d : ", (i + 1));
        scanf("%d", (aadhar_ptr + i));
    }

    for(int i = 0; i < 5; i++) {
        printf("Aadhar number %d : %d \n", (i + 1), *(aadhar_ptr + i));
    }

    int array_one[] = {20, 30, 35, 45, 50, 65, 70, 90};
    print_array(&array_one, 8);

    // 2d array

    int student_marks[3][3];

    for(int i = 0; i < 3; i++) {
        printf("Student %d : \n", (i + 1));
        for(int j = 0; j < 3; j++) {
            printf("\tSubject %d : ", (j + 1));
            scanf("%d", &student_marks[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        printf("Student %d : \n", (i + 1));
        for(int j = 0; j < 3; j++) {
            printf("\tSubject %d : %d \n", (j + 1), student_marks[i][j]);
        }
    }


    return 0;
}
