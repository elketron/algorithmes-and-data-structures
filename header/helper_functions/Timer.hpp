#include <chrono>

class Timer{
public:
    Timer();
    ~Timer();
private:
    std::chrono::steady_clock::time_point time;
    std::chrono::steady_clock::time_point time2;
};
