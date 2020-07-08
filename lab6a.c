/***************************************

EECS2031 – Lab 6

Filename:	lab6a.c

Author: Chiming Chen

Email: alex.chen0724@gmail.com

EECS login ID: alex0724

****************************************/

#include <stdio.h>
#include <ctype.h>
int main()
{
    float inch, cm;
    while ( (inch != EOF) && (inch != 0) ){
    printf("Enter the measurement in inches>");
    scanf("%f", &inch);
    cm = inch * 2.54;
    printf("%.2f cm\n", cm);
    }
}
