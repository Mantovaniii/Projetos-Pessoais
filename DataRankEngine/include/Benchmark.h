#pragma once
#include <vector>
#include <string>

class Benchmark {
public:
    static double measure(void (*sortFunc)(std::vector<int>&), std::vector<int> data);
};
