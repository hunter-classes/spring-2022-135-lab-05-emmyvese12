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

  return 0;
}
