include "main.h"

int get_bit(unsigned long int n, unsigned int index){
    unsigned long int quotient = n;
    int fold = 1;
    int counter = 0;
    int indexCounter;
    int binaryResult;

    while(1){ // counts how many folds we have to go until we reach the max fold less than the number we received
        
        if(fold+fold>quotient){
            break;
        }
        counter++;
        fold = fold+fold;
    }

    if(index>(counter)){ // this returns negative if the index is greater than the list of the binary result
        return -1;
    }else{
        indexCounter = counter;
    }

    unsigned long int newNum = quotient;

    for(int i=counter;i>=0;i--){
        if(i==counter){
            if(quotient==0){
                binaryResult = 0;
            }else{
                binaryResult = 1;
            }
            newNum = newNum - fold;
            fold = fold >> 1;

            if(indexCounter==index){
                break;
            }else{
                indexCounter--;
            }

            continue;
        }
        
        if(newNum<fold){
            binaryResult = 0;
        }else{
            binaryResult = 1;
            newNum = newNum - fold;
        }

        if(indexCounter==index){
            break;
        }else{
            indexCounter--;
        }
    
        fold = fold >> 1;

    }

    return binaryResult;
}