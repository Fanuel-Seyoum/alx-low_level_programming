#include <stdio.h>
/*
Write a function that receives num1 and num2 and simply returns the maximum between them
*/

int findMax(int num1, int num2)
{
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main ()
{
    int a =5, b = 7;
    int max;
    max = findMax(a,b);
    printf("max between %d and %d = %d\n", a,b,max);
}

