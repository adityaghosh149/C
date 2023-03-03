#include<stdio.h>

int main () {
    int unit = 0;
    float amount = 0;
    printf("Enter number of unit consumed : ");
    scanf("%d", &unit);
    if(unit <= 100)
        amount = unit * 4.50;
    else if(100 < unit && unit <= 200)
        amount = (100 * 4.50) + ((200 - unit) * 5.50);
    else if(200 < unit && unit <= 500)
        amount = (100 * 4.50) + (100 * 5.50) + ((500 - unit) * 6.50);
    else
        amount = (100 * 4.50) + (100 * 5.50) + (300 * 6.50) + ((unit - 500) * 6.75);
    printf("Electricity bill of %d unit current : %f", unit, amount);
    return 0;
}
