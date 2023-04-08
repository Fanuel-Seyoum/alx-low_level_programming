#include "main.h"

int clear_bit(unsigned long int *n, unsigned int index){
    unsigned long int quotient = *n;
    int fold = 1;
    int counter = 0;
    int indexCounter;
    int binaryResult;
    int twoMultiples;
    unsigned long int result = 0;


    while(1){ // counts how many folds we have to go until we reach the max fold less than the number we received
        
        if(fold+fold>quotient){
            break;
        }
        counter++;
        fold = fold+fold;
    }

    if(index>(counter)){ // this returns negative if the index is greater than the list of the binary result
        twoMultiples = 1;
        for(int j=(index);j>0;j--){ // handles the multiplication  of the two powers
            twoMultiples*=2;
        }
        result = result + (0*twoMultiples);
    }
    
    indexCounter = counter;

    unsigned long int newNum = quotient;

    for(int i=counter;i>=0;i--){
        twoMultiples = 1;

        if(i==counter){
            if(quotient==0){
                binaryResult = 0;
            }else{
                binaryResult = 1;
            }
            newNum = newNum - fold;
            fold = fold >> 1;

            if(indexCounter==index){
                binaryResult = 0;
            }
       
            if(binaryResult!=0){  // it prevents the loop from functioning if the digit is only zero
                for(int j=(indexCounter);j>0;j--){ // handles the multiplication  of the two powers
                    twoMultiples*=2;
                }
            }

            result = result + (binaryResult*twoMultiples);
            indexCounter--;


            continue;
        }
        
        if(newNum<fold){
            binaryResult = 0;
        }else{
            binaryResult = 1;
            newNum = newNum - fold;
        }

        if(indexCounter==index){
             binaryResult = 0;
        }

        if(binaryResult!=0){  // it prevents the loop from functioning if the digit is only zero
            for(int j=(indexCounter);j>0;j--){ // handles the multiplication  of the two powers
                twoMultiples*=2;
            }
        }

        result = result + (binaryResult*twoMultiples);

        indexCounter--;

    
        fold = fold >> 1;

    }

    *n = result;

    return 1;
}