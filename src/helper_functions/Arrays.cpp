#include <helper_functions/Arrays.hpp>
#include <iostream>
#include <chrono>
#include <random>

std::vector<int> rand_arr(int min, int max, int amount){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::vector<int> rand_arr(amount);
    std::minstd_rand0 rand1(seed);
    std::uniform_int_distribution<> distr(min,max);
    
    for (int i = 0; i < amount; i++){
        rand_arr[i] = distr(rand1);
    }
    return rand_arr;
}

void print_arr(std::vector <int>& arr){
    for (auto val : arr){
        std::cout << val << " ";
    }
    std::cout << '\n';
}
