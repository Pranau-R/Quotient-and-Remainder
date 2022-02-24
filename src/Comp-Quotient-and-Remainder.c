#include <stdio.h>
int main()
{
    int divident, divisor, quotient, remainder;
    printf("Enter the Divident: ");
    scanf("%d", &divident);
    printf("Enter the Divisor: ");
    scanf("%d", &divisor);
    quotient = divident/divisor;
    remainder = divident%divisor;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);
    return 0;
}