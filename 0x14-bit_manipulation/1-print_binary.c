#include "main.h"

#include <stdio.h>
#include <stdlib.h>

void print_binary(unsigned long int n){
    unsigned long int quotient = n;
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
                printf("0");
            }else{
                printf("1");
            }
            newNum = newNum - fold;
            fold = fold >> 1;
            continue;
        }
        if(newNum<fold){
            printf("0");
        }else{
            printf("1");
            newNum = newNum - fold;
        }
    
        fold = fold >> 1;

    }
}

