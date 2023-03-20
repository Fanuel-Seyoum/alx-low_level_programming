#include <stdio.h>
#include <stdlib.h>

/*
int main() 
{
    int i, n;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n*sizeof(int));
*/
    /*
    This line of code converts the value of the dynamic memory allocated through the malloc to an in ttype pointer
    */
/*
    if(ptr == NULL)
    {
        printf("Memory not available.");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        printf("Enter the %d integer: ", (i+1));
        scanf("%d", ptr +i);
    }
    for (i=0; i<n; i++)
    printf("%d\n", *(ptr+i)); // dereferencing the pointer here
    return 0;
}
*/

// The below code is written by Fanuel and Yidne to check about the void return type.

int main()
{
    int integer = 56;
    float decimal = 76.98;
    void *samplePointer = &integer;
    void *samplePointer2 = &decimal;
    printf("The first pointed value is: %p \n", samplePointer);
    printf("The seccond pointed value of is: %p\n", samplePointer2);
    int *mypointer = samplePointer;
    printf("Pointer's pointer value is %d and its location is %p\n", *mypointer, mypointer);
    return 0;
}