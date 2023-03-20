#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int *ptr = (int *)malloc(2*sizeof(int));
    if(ptr == NULL)
    {
        printf("Memory not available!\n");
        exit(19);
    }
    printf("Enter the two numbers: \n9");
    for (i = 0; i<2; i++)
    {
        scanf("%d\n", ptr+i);
    }
    //Memory allocation for two more integers
    ptr = (int *)realloc(ptr,4*sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not available!\n");
        exit(1);
    }
    printf("Enter 2 more integers: \n");
    for (i=2; i<4; i++)
    {
        scanf("%d\n", ptr+i);
    }
    //Printing the values on the screen
    for (i =0; i<4; i++)
    {
        printf("The numbers are %d\n", *(ptr+i));
    }
    return 0;

}

//the above code needs some fix for fine tuning.