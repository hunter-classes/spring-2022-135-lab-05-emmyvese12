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
    // n is NOT a prime number if it IS divisible evenley (==0) by any of the numbers from 2 to n-1
    bool resultPrime;
    int count = 0;
    
    for (int i = n; i <= n; i--){
        if (i == 2){
        break;
        }
        if (n == 1 || n == 0){ // if 0 or 1 was to be passed to the next if statement, the modulo of 0 from (n-1) would be undefined and crash the program
            count += 1; 
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


// task C

int nextPrime(int n){
    bool testPrime = false;
    int countTest;
    //return the smallest prime number greter than n 
    
    do {
        countTest = 0;
        n = n + 1; //add 1 to test the next number

        for (int i = n; i <= n; i--){
        if (i == 2){
            break;
        }
        if (i == 1){
            n += 1; //next prime number is 2 (so we add 1) (if we didn't add a 1, it will crash the program in the next if statmeent b/c the modulo of 0 is undefined)
            break;
        }
        
        if (n != 2 && n % 2 == 0 || n % (i-1) == 0){ //if these conditions are met, the number is NOT a prime number
            countTest += 1;
            }
        }
        if (countTest > 0){
            testPrime = false;
        }
        else if (countTest == 0){
            testPrime = true;
        }
    }

    while (testPrime == false); //while it is not a prime num, do what's in the do loop, (adds 1 then stores if it's a prime num or not in a bool)

    return n;
}

// task D

int countPrimes(int a, int b){
    //returns the num of prime numbers in interval a <= b <= c

    int counterDo;
    bool testDo;
    bool checkPrime = false;
    int countInitial = 0;
    int primeRangeCount = 0;

    // check if the first num is a prime number

    for (int i = a; i <= a; i--){
        if (i == 2){
            break;
        }
        if (a == 1 || a == 0){
            checkPrime = false;
            countInitial += 1; //so it counts as a non-prime num
            break;
        }
        if (a != 2 && a % 2 == 0 || a % (i-1) == 0){ //if these conditions are met, the number is NOT a prime number 
            countInitial += 1;
        }
    }
    if (countInitial > 0){
        checkPrime = false;
    }
    else if (countInitial == 0){
        checkPrime = true;
    }

    if (checkPrime == true){
        primeRangeCount += 1;
    }


    while (a != b){ //while a doesn't equal to b that means it hasn't fully went through the numbers in the range

        counterDo = 0; //adds numbers to show that it is NOT a prime number
        a = a + 1; //add 1 to test the next number

        if (a == 1){
            a += 1; //add one because in the loop (i-1) will crash the program, adding 1 allows it to become 2 (a prime num)
        }

        for (int i = a; i <= a; i--){
            if (i == 2){
            break;
        }

            if (a != 2 && a % 2 == 0 || a % (i-1) == 0){ //if these conditions are met, the number is NOT a prime number
                counterDo += 1;
                }
            }
            if (counterDo > 0){
                testDo = false;
                counterDo = 0; //restart counter back to 0
            }
            else if (counterDo == 0){ //it is a prime number
                testDo = true;
                primeRangeCount += 1; //add 1 to show that we reached a prime num in the range
            }

        }

    return primeRangeCount;
}


// task E
