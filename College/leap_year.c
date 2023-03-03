#include<stdio.h>
#include<stdbool.h>

int main () {
    int year = 0;
    printf("Enter year to check if it is leap year or not : ");
    scanf("%d", &year);

    bool leap_year = false;
    if(year % 4 == 0) {
        if (year % 100) {
            if (year % 400 == 0)
                leap_year = true;
            else
                leap_year = false;
        }
        leap_year = true;
    }
    if(leap_year)
        printf("%d is a leap year", year);
    else
        printf("%d is not a leap year", year);
    return 0;
}
