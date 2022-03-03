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
  std::cout << "isPrime(8)" << std::endl;
  bool result1pr = isPrime(8);
  std::cout << result1pr;
  std::cout << " == false\n";
  std::cout << "isPrime(11)" << std::endl;
  bool result2pr = isPrime(11);
  std::cout << result2pr;
  std::cout << " == true\n";

  std::cout << "\n============Task C: next prime============" << std::endl;
  std::cout << "nextPrime(14)" << std::endl;
  int result1np = nextPrime(14);
  std::cout << result1np << std::endl;
  std::cout << "nextPrime(17)" << std::endl;
  int result2np = nextPrime(17);
  std::cout << result2np << std::endl;

  std::cout << "\n============Task D: count primes============" << std::endl;
  std::cout << "countPrimes(1,5)" << std::endl;
  int result1cp = countPrimes(1,5);
  std::cout << result1cp << std::endl;
  std::cout << "countPrimes(19,42)" <<std::endl;
  int result2cp = countPrimes(19,42);
  std::cout << result2cp << std::endl;


  return 0;
}
