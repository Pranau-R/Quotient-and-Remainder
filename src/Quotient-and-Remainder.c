/*
Module: Comp-Quotient-and-Remainder.c

Function:
        Computing quotient and reminder of a given number.

Copyright notice:
        This file copyright (C) 2022 by

        MCCI Corporation
        3520 Krums Corners Road
        Ithaca, NY 14850

        An unpublished work. All rights reserved.

        This file is proprietary information, and may not be disclosed or
        copied without the prior permission of MCCI Corporation.

Author:
        Pranau R, MCCI Corporation   March 2022
*/

#include <stdio.h>

/****************************************************************************\
|
|   Code.
|
\****************************************************************************/

int main()
    {
    printf("\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("This is quotient and remainder v1.0.0\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("\n");
    printf("It is used to find the quotient and the remainder of two numbers.\n\n");

    int divident, divisor, quotient, remainder;

    printf("Enter the Divident: ");
    scanf("%d", &divident);

    printf("Enter the Divisor: ");
    scanf("%d", &divisor);

    quotient = divident/divisor;
    remainder = divident % divisor;

    printf("\n\n-----------------------------------------\n");
    printf("\nQuotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    printf("\n\nPress any key to close the program!...\n");
    getch();

    return 0;
    }