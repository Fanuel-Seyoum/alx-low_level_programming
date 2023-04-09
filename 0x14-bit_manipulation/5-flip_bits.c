#include "main.h"

unsigned int flip_bits(unsigned long int n, unsigned long int m){
    unsigned int quotient = m^n;
    unsigned int numOfChangedBit = 0;

    int fold = 1;
    int counter = 0;

    while(1){ // counts how many folds we have to go until we reach the max fold less than the number we received
        
        if(fold+fold>quotient){
            break;
        }
        counter++;
        fold = fold+fold;
    }
    unsigned long int newNum = quotient;
    for(int i=counter;i>=0;i--){

        if(i==counter){
            if(quotient==0){
            }else{
                numOfChangedBit += 1;
            }
            newNum = newNum - fold;
            fold = fold >> 1;
            continue;
        }
        if(newNum<fold){
        }else{
            numOfChangedBit += 1;
            newNum = newNum - fold;
        }
    
        fold = fold >> 1;

    }
    return numOfChangedBit;
}
