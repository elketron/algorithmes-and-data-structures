#include <encryption_algs.hpp>
#include <iterator>

std::string xor_encrypt(std::string key, std::string output){

  for (size_t i = 0; i != output.size(); i++){
    output[i] = (output[i] ^ key[i]) + '0';
  }
  return output;
}
