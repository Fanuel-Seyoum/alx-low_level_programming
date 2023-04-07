#include<stdlib.h>
#include<stdio.h>
unsigned int binary_to_uint(const char *b);

int main(){
   unsigned int x = binary_to_uint("101");
   printf("\n%d \n",x);
}

unsigned int binary_to_uint(const char *b){
    int count;
	count = 0;

	while (b[count] != '\0')   //counts the numbers of characters in the pointer argument
	{
        printf("%c",b[count]);
        count++;	
	}
    int result = 0;
    int twoMultiples;
    int charH;

    for(int i=0;i<count;i++){  //interates through the char array 
        twoMultiples = 1;

        if(b[i]!=0){  // it prevents the loop from functioning if the digit is only zero
            for(int j=(count-i);j>1;j--){ // handles the multiplication  of the two powers
                twoMultiples*=2;
            }
        }
        charH = b[i]-'0';  //conversion of char to int
        result = result + (charH*twoMultiples);
    }

    return result;
}