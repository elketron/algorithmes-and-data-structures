#pragma once

#include <bits/stdint-intn.h>
#include <cstdint>
#include <random>
#include <vector>
#include <chrono>
#include <iostream>

// makes an array filled with random numbers
static std::vector<int> rand_arr(int min, int max, int amount){
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::vector<int> rand_arr(amount);
    std::minstd_rand0 rand1(seed);
    std::uniform_int_distribution<> distr(min,max);
    
    for (int i = 0; i < amount; i++){
        rand_arr[i] = distr(rand1);
    }
    return rand_arr;
}

static void print_arr(std::vector <int>& arr){
    for (auto val : arr){
        std::cout << val << " ";
    }
    std::cout << '\n';
}

static void insertion_sort(std::vector<int>& arr, int n){
   if (n > 0){
       insertion_sort(arr, n - 1);
       int x = arr[n];
       int j = n - 1;
       while (j >= 0 && arr[j] > x){
            arr[j + 1] = arr[j];
            j = j - 1;
       }
       arr[j + 1] = x;
   } 
   print_arr(arr);
}
