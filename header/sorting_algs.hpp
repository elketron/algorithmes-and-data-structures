#pragma once

#include <helper_functions/Arrays.hpp>
#include <bits/stdint-intn.h>
#include <cstdint>
#include <random>
#include <vector>
#include <chrono>
#include <iostream>

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
