#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number){
    unsigned int i = 0;
    unsigned int summit = 0;
    for( i = 0; i<=number; i++){
        summit += i*i;
    }
    return summit;
}

unsigned int square_of_sum(unsigned int number){
    unsigned int i = 0;
    unsigned int summit = 0;
    unsigned int total = 0;
    for( i = 0; i<=number; i++){
        summit += i;
    }
    total = summit*summit;
    return total;
}

unsigned int difference_of_squares(unsigned int number){
    return  square_of_sum(number) - sum_of_squares(number);
}