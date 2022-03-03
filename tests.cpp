#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

// task A
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