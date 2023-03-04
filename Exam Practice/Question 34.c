#include<stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int length = sizeof(arr) / sizeof(int) ;

    // int *ptr = arr;
    // int length = 0;
    // while(*(ptr++))
       // length++;

    int total = 0;
    for(int i = 0; i < length; i++) {
        total += arr[i];
    }

    float avg = total / length;

    printf("Average of all the numbers in the array is : %f", avg);
}
