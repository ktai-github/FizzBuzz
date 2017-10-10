//
//  main.c
//  FizzBuzz
//
//  Created by Kevin T on 2017-10-09.
//  Copyright © 2017 Kevin T. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //multiple of 3 equal 0
    int j;
    
    //multiple of 5 equal 0
    int k;
    
    //evaluate every number from 1 to 100 (less than 101)
    //i is each number being evaluated starting from 1 and increment by 1
    for (int i = 1; i < 101; i++) {
        
        //print the number being evaluated
        printf("%d\n", i);
        
        //evaluate each number divisible by 3
        j = i % 3;
        
        //evaluate each number divisible by 5
        k = i % 5;
        
        //if a number is divisible by 3 but not 5, print "Fizz"
        if (j == 0 && k != 0) {
            printf("Fizz\n");
        }
        
        //if a number is divisible by 5 but not 3, print "Buzz"
        if (j != 0 && k == 0) {
            printf("Buzz\n");
        }
        
        //if a number is divisible by 3 and 5, print "FizzBuzz"
        if (j == 0 && k == 0) {
            printf("FizzBuzz\n");
        }
    }
    
}
