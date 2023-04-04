#include <stdio.h>
/*
This program initializes 2 vairables of integer type
    grade1
    grade2
prints the value and address of each of those variables
*/
int main()
{
    int grade1 = 3, grade2 = 4;
    int *p1 = &grade1;
    int *p2 = &grade2;
    printf("The value of grade1 is %d and its address is %p\n", grade1, p1);
    printf("The value of grade2 is %d and its address is %p\n", grade2, p2);
    printf("The value of grade1 is %d and its address is %p\n", *p1, &grade1);
    printf("The value of grade2 is %d and its address is %p\n", *p2, &grade2);
    return 0;
}

// What would be printed in the below code?

int main()
{
    
}