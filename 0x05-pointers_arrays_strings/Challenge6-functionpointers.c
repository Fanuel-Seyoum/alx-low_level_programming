#include <stdio.h>
#define size 4
/* 
the below code is commented out since it is replaced with another code at the bottom of this one.
the code is a simple calculator that performs the four operations on two numbers
the switch function is replaced by function pointers
*/

float sum(float a, float b)
{
    return (a+b);
}
float sub(float a, float b)
{
    return (a-b);
}
float mult(float a, float b)
{
    return (a*b);
}
float div(float a, float b)
{
    return (a/b);
}

int main()
{
    float (*calcarray[4])(float,float) = {sum, sub, mult, div};
    float a, b;
    int choice;
    printf("Please enter the two numbers and your operation choice\n");
    scanf("%f",&a);
    printf("Please enter the second number\n");
    scanf("%f",&b);
    printf("Please enter your operation choice\n");
    scanf("%d", &choice);
    printf("The result of your selected operation is %f\n", calcarray[choice](a,b));
    return 0;
}

/*
int main ()
{
    int choice;
    float a, b, result;
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("Enter the second number\n");
    scanf("%f", &b);
    printf("Enter your operation choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 0: result = sum(a,b);
        break;
        case 1: result = sub(a,b);
        break;
        case 2: result = mult(a,b);
        break;
        case 3: result = div(a,b);
        break;
    }
    printf("The result is %f\n", result);

}
*/