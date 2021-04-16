#include <chrono>
#include <helper_functions/Timer.hpp>
#include <iostream>


Timer::Timer(): time(std::chrono::steady_clock::now()){ 
}

Timer::~Timer(){
  time2 = std::chrono::steady_clock::now();

  std::chrono::duration<double> time_span = 
    std::chrono::duration_cast<std::chrono::duration<double>>(time2 - time);
  std::cout << "it took: " << time_span.count() << "s\n";
}

