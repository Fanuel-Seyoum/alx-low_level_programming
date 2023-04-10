#include "main.h"

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b){
    int count = 0;
    int wrongChar = 0;
    int result = 0;
    int twoMultiples;
    int charH;

    if(b==NULL){
        return 0;
    }

	while (b[count] != '\0')   //counts the numbers of characters in the pointer argument
	{
        count++;	
	}
    

    for(int i=0;i<count;i++){  //interates through the char array 
        twoMultiples = 1;

        if(b[i]!='0'&&b[i]!='1'){
            wrongChar = 1;
            break;
        }

        if(b[i]!=0){  // it prevents the loop from functioning if the digit is only zero
               twoMultiples =  1<<(count-i-1);
        }
        charH = b[i]-'0';  //conversion of char to int
        result = result + (charH*twoMultiples);
    }

    if(wrongChar==0){
        return result;
    } else{
        return 0;
    }
}




