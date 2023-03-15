#include <stdio.h>
#include <string.h>
/*
This program checks if a string is palindrome
*/

int main()
{
    char theString[100]; // this line declares the string named 'theString' and sets the array size to be 100
    int len, i, flagger; // this line declares the length the i and the flagger
    printf("Please enter the string to be checked for Palindrome\n");
    scanf("%s", theString);
    len = strlen(theString);
    for (i = 0; i < len/2; i++)
    {
        if (theString[i] != theString[len-i-1])
        {
            flagger = 4;
            break;
        }
    }
    if (flagger == 4)
        printf("the string %s is not a Palindrome\n", theString);
    else
        printf("The string %s is Palindrome\n", theString);
    return 0;
    }
