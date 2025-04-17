#include "Benchmark.h"
#include <chrono>

double Benchmark::measure(void (*sortFunc)(std::vector<int>&), std::vector<int> data) {
    auto start = std::chrono::high_resolution_clock::now();
    sortFunc(data);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> elapsed = end - start;
    return elapsed.count();
}
