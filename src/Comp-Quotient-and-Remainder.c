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
    int divident, divisor, quotient, remainder;

    printf("Enter the Divident: ");
    scanf("%d", &divident);

    printf("Enter the Divisor: ");
    scanf("%d", &divisor);

    quotient = divident/divisor;
    remainder = divident % divisor;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d\n", remainder);

    return 0;
    }