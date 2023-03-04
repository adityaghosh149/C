#include<stdio.h>

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int length = sizeof(arr) / sizeof(int);
    int *ptr = arr;

    for(int i = 0; i < length; i++) {
        printf("Value of arr[%d] is : %d \n",i,  *(ptr + i));
    }
}
