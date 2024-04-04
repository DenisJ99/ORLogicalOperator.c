#include <stdio.h>

int main(){

    float temp = 25;

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }
    return 0;
}

/* Logical operators = || (OR) checks if at least one condition is true.
*/