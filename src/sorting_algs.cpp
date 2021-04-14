#include <sorting_algs.hpp>

int main (int argc, char *argv[]){
  auto vec = rand_arr(0, 100, 10);

  insertion_sort(vec,vec.size());

  return 0;
}
