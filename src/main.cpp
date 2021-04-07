#include <encryption_algs.hpp>
#include <iostream>
#include <ostream>


int main (int argc, char *argv[]){
  std::string input;
  std::string key = "serpur$n";
  std::cout << "input a string: ";
  std::cin >> input;

  std::string out = xor_encrypt(key, input);
  std::cout << std::endl << "output: " << out << std::endl;

  return 0;
}
