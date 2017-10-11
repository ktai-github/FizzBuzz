//
//  main.c
//  FizzBuzz
//
//  Created by Kevin T on 2017-10-09.
//  Copyright © 2017 Kevin T. All rights reserved.
//

#include <stdio.h>

//main program returning integer
int main(int argc, const char * argv[]) {

    //integer remainder of division by 3
    int j;
    
    //integer remainder of division by 5
    int k;
    
    //evaluate every number from 1 to 100
    //i is each number being evaluated and increment by 1
    for (int i = 1; i < 101; i++) {
        
        //evaluate for the remainder of the value divided by 3
        //remainder is 0 if divisible by 3
        j = i % 3;
        
        //evaluate for the remainder of the value divided by 5
        //remainder is 0 if divisible by 5
        k = i % 5;
        
        //if a number is divisible by 3 but not 5, print "Fizz"
        if (j == 0 && k != 0) {
            printf("Fizz");
        }
        
            //if a number is divisible by 5 but not 3, print "Buzz"
            else if (j != 0 && k == 0) {
                printf("Buzz");
            }
        
            //if a number is divisible by 3 and 5, print "FizzBuzz"
            else if (j == 0 && k == 0) {
                printf("FizzBuzz");
            }
        
            //if a number is neither divisible by 3 nor 5, print the number being evaluated
            else {
                printf("%d ", i);
            }
        
        //print next line
        printf("\n");
    }
}
