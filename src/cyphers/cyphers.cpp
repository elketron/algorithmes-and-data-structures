#include <encryption_algs.hpp>
#include <string>
#include <iostream>

int main (int argc, char *argv[]){
  std::string input = "hello";
  std::string inp2  = "zomer";
  std::string inp3  = "banana";

  std::cout << input << ": "<< caesar(input, 1) << std::endl;
  std::cout << inp2  << ": "<< caesar(inp2, 1) << std::endl;
  std::cout << inp2  << ": "<< caesar(inp2, 5) << std::endl;
  std::cout << inp2  << ": "<< caesar(inp2, 13) << std::endl;
  std::cout << inp3  << ": "<< caesar(inp3, 1) << std::endl;

  return 0;
}
