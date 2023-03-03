#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;

    ptr = arr;  // Pointer 'ptr' now points to the first element of the array 'arr'

    printf("Elements of the array are: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr);  // Dereferencing the pointer to access the value at that memory location
        ptr++;  // Incrementing the pointer to point to the next memory location
    }

    return 0;
}
