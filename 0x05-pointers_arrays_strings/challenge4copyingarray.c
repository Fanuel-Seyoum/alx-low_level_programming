#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
/*
Initialize an array
1. Day
2. Month
3. Year
create another array of teh same size
copy the arry you initialized into the additional array you created
*/
int main()
{
    int date[SIZE] = {1, 2, 2000};
    int date2[SIZE];
    int i;
    for (i=0; i<SIZE; i++)
    {
        date2[i] = date[i];
        printf("Original_date[%d] = %d\n", i, date[i]);
        printf("Copied_date[%d] = %d\n", i, date2[i]);
    }
     
}