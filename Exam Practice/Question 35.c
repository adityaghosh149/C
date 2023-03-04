#include<stdio.h>

int main() {
    int arr[] = {2, 4, 5, 3, 6, 7, 9, 8};

    int length = sizeof(arr) / sizeof(int);

    if(length == 0)
        printf("Array is empty!");
    else {
        int max = arr[0];
        for(int i = 1; i < length; i++) {
            if(max < arr[i])
                max = arr[i];
        }
        printf("Max number in the array : %d", max);
    }



}
