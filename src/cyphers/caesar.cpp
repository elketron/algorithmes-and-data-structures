#include <encryption_algs.hpp>
#include <string>

/*
  abcdefghijklmnopqrstuvwxyz

  input = hello
  rot = 1

  output = ifmmp

*/
std::string caesar(std::string str, int rot){
  rot %= 26;
  
  for (auto &n: str){
    n = 'a' + (n - 'a' + rot + 26) % 26;
  }

  return str;
}
