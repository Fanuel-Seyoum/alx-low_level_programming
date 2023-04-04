#include <stdlib.h>
#include <stdio.h>
int main (int argc, char* argv[])
{
    int i,sum = 0;
    printf("Let us see what is in the argv[]\n");
    for (i = 0; i < argc ; i++ )
    {
        printf("argv[%d] = %s\n", i,argv[i]);
        sum = sum + atoi(argv[i]); //the ith element of argv is a string so we change it to integer by using the atoi function
        // the above line of code can be alternatively expressed as sum += atoi(argv[i]);
    }
    printf("The total argument count is %d\n", argc);
    printf("The first argument in the array is: %d\n ", atoi(argv[0]));
    printf("Total = %d\n", sum);

    return 0;
}