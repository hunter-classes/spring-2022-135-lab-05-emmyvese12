#include <iostream>
#include "funcs.h"

// task A 

bool isDivisibleBy(int n, int d){
    //if n is divisible by d the function returns true, else returns false
    bool resultDiv;
    if (n % d == 0){
        resultDiv = true;
    }
    else if (n % d != 0){
        resultDiv = false;
    }
return resultDiv;
}

// task B

bool isPrime(int n){
    bool resultPrime;
    int count = 0;
    if (n == 1 || n == 0){ // without this if statement, if 0 or 1 was to go in the loop, the modulo of 0 from (n-1) would be undefined and crash the program
		return false;
    }
    for (int i = n; i <= n; i--){
        if (i == 2){
        break;
        }
        if (n != 2 && n % 2 == 0 || n % (i-1) == 0){ //if these conditions are met, the number is NOT a prime number 
            count += 1;
        }
    }
    if (count > 0){
        resultPrime = false;
    }
    else if (count == 0){
        resultPrime = true;
    }
return resultPrime;
}

