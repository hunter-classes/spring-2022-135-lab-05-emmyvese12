/*
Emmy Veselinov
CSCI 135 Lab-05

Functions and Prime Numbers
*/

#include <iostream>


#include "funcs.h"

int main(){
  std::cout << "\n============Task A: is divisible?============" << std::endl;
  std::cout << "isDivisibleBy(100,25): " << std::endl;
  bool result1d = isDivisibleBy(100,25);
  std::cout << result1d;
  std::cout << " == true\n";
  std::cout << "isDivisibleBy(35,17): " << std::endl;
  bool result2d = isDivisibleBy(35,17);
  std::cout << result2d;
  std::cout << " == false\n";

  std::cout << "\n============Task B: is prime?============" << std::endl;
  std::cout << "isPrime(8):" << std::endl;
  bool result1pr = isPrime(8);
  std::cout << result1pr;
  std::cout << " == false\n";
  std::cout << "isPrime(11):" << std::endl;
  bool result2pr = isPrime(11);
  std::cout << result2pr;
  std::cout << " == true\n";

  std::cout << "\n============Task C: next prime============" << std::endl;
  std::cout << "nextPrime(14):" << std::endl;
  int result1np = nextPrime(14);
  std::cout << result1np << std::endl;
  std::cout << "nextPrime(17):" << std::endl;
  int result2np = nextPrime(17);
  std::cout << result2np << std::endl;

  std::cout << "\n============Task D: count primes in range============" << std::endl;
  std::cout << "countPrimes(1,5):" << std::endl;
  int result1cp = countPrimes(1,5);
  std::cout << result1cp << std::endl;
  std::cout << "countPrimes(19,42):" <<std::endl;
  int result2cp = countPrimes(19,42);
  std::cout << result2cp << std::endl;

  std::cout << "\n============Task E: is a twin prime?============" << std::endl;
  std::cout << "isTwinPrime(7):" << std::endl;
  bool result1tp = isTwinPrime(7);
  std::cout << result1tp;
  std::cout << " == true\n";
  std::cout << "isTwinPrime(1):" << std::endl;
  bool result2tp = isTwinPrime(1);
  std::cout << result2tp;
  std::cout << " == false\n";
  std::cout << "isTwinPrime(23):" << std::endl;
  bool result3tp = isTwinPrime(23);
  std::cout << result3tp;
  std::cout << " == false\n";

  std::cout << "\n============Task F: next twin prime============" << std::endl;
  std::cout << "nextTwinPrime(0):" << std::endl;
  int result1ntp = nextTwinPrime(0);
  std::cout << result1ntp << std::endl;
  std::cout << "nextTwinPrime(9):" << std::endl;
  int result2ntp = nextTwinPrime(9);
  std::cout << result2ntp << std::endl;

  std::cout << "\n============Task G: largest twin prime in range============" << std::endl;
  std::cout << "largestTwinPrime(5,18):" << std::endl;
  int result1ltp = largestTwinPrime(5,18);
  std::cout << result1ltp << std::endl;
  std::cout << "largestTwinPrime(1,31):" << std::endl;
  int result2ltp = largestTwinPrime(1,31);
  std::cout << result2ltp << std::endl;
  std::cout << "largestTwinPrime(14,16):" << std::endl;
  int result3ltp = largestTwinPrime(14,16);
  std::cout << result3ltp << std::endl;

  return 0;
}