#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//task A
TEST_CASE("0 Divisble by d"){ //can't put 0 as n because it will be undefined
  CHECK(isDivisibleBy(0,10) == true);
  CHECK(isDivisibleBy(0,8) == true);
}

TEST_CASE("Last Digit is Even Divisible by Even d"){
    CHECK(isDivisibleBy(12,2) == true);
    CHECK(isDivisibleBy(16,4) == true);
    CHECK(isDivisibleBy(13,2) == false); //last digit is odd
    CHECK(isDivisibleBy(22,3) == false); //divisible by odd --> not true
}

TEST_CASE("Divisible by 1"){ //any integer is divisible by 1
    CHECK(isDivisibleBy(24,1) == true);
    CHECK(isDivisibleBy(31,1) == true);
    CHECK(isDivisibleBy(1,1) == true);
    CHECK(isDivisibleBy(0,1) == true);
}

TEST_CASE("Last Digit is 0 or 5"){ 
    CHECK(isDivisibleBy(30,2) == true);
    CHECK(isDivisibleBy(25,5) == true);
    CHECK(isDivisibleBy(50,2) == true);
    CHECK(isDivisibleBy(15,5) == true);
}

//task B
TEST_CASE("Small Prime Numbers"){
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
}

TEST_CASE("Large Prime Numbers"){
    CHECK(isPrime(109) == true);
    CHECK(isPrime(111) == false);
    CHECK(isPrime(139) == true);
    CHECK(isPrime(142) == false);
}

TEST_CASE("Negative Numbers"){
    CHECK(isPrime(-1) == false);
    CHECK(isPrime(-5) == false);
    CHECK(isPrime(-9) == false);
}


//task C
TEST_CASE("Prime Numbers"){
    CHECK(nextPrime(2) == 3);
    CHECK(nextPrime(5) == 7);
    CHECK(nextPrime(23) == 29);
    CHECK(nextPrime(41) == 43);
}

TEST_CASE("Non-prime Numbers"){
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(6) == 7);
    CHECK(nextPrime(15) == 17);
    CHECK(nextPrime(27) == 29);
}

TEST_CASE("Negative Numbers"){
    CHECK(nextPrime(-1) == 2);
    CHECK(nextPrime(-4) == 2);
    CHECK(nextPrime(-10) == 2);
}

//task D
TEST_CASE("Prime to Prime Numbers"){
    CHECK(countPrimes(3,7) == 3);
    CHECK(countPrimes(2,17) == 7);
    CHECK(countPrimes(13,47) == 10);
}

TEST_CASE("Prime to Non-prime Numbers"){
    CHECK(countPrimes(2,8) == 4);
    CHECK(countPrimes(7,10) == 1);
    CHECK(countPrimes(17,39) == 6);
}

TEST_CASE("Non-prime to Non-prime Numbers"){
    CHECK(countPrimes(0,4) == 2);
    CHECK(countPrimes(1,24) == 9);
    CHECK(countPrimes(6,14) == 3);
    CHECK(countPrimes(18,39) == 5);
}

TEST_CASE("Non-prime to Prime Numbers"){
    CHECK(countPrimes(0,2) == 1);
    CHECK(countPrimes(1,5) == 3);
    CHECK(countPrimes(6,17) == 4);
    CHECK(countPrimes(4,19) == 6);
}

TEST_CASE("Range Starting from a Negative Number"){
    CHECK(countPrimes(-5,2) == 1);
    CHECK(countPrimes(-2,5) == 3);
    CHECK(countPrimes(-3,17) == 7);
}

//task E
TEST_CASE("Non-prime Numbers"){
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(14) == false);
}

TEST_CASE("Prime Numbers That Are Not Twin Prime"){
    CHECK(isTwinPrime(2) == false);
    CHECK(isTwinPrime(23) == false);
    CHECK(isTwinPrime(30) == false);
}

TEST_CASE("Prime Numbers That Are Twin Prime"){
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(5) == true);
    CHECK(isTwinPrime(11) == true);
    CHECK(isTwinPrime(19) == true);
}

TEST_CASE("Negative Numbers"){
    CHECK(isTwinPrime(-1) == false);
    CHECK(isTwinPrime(-5) == false);
    CHECK(isTwinPrime(-20) == false);
}

//task F
TEST_CASE("Negative Numbers"){
    CHECK(nextTwinPrime(-2) == 3);
    CHECK(nextTwinPrime(-3) == 3);
    CHECK(nextTwinPrime(-9) == 3);
}

TEST_CASE("Prime Numbers That Are Not Twin Prime"){
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(23) == 29);
    CHECK(nextTwinPrime(31) == 41);
}

TEST_CASE("Twin Prime Numbers"){
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(7) == 11);
    CHECK(nextTwinPrime(29) == 31);
}

TEST_CASE("Non-Prime Numbers"){
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(1) == 3);
    CHECK(nextTwinPrime(12) == 13);
    CHECK(nextTwinPrime(18) == 19);
}

//task G
