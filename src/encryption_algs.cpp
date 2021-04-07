#include <encryption_algs.hpp>
#include <iterator>

std::string xor_encrypt(std::string output){
  char key[] = {'k', '4', '%', 'G', 'V'};

  for (int i = 0; i < output.size(); i++){
    output[i] = output[i] ^ key[i % (sizeof(key) / sizeof(char))];
  }
  return output;
}
