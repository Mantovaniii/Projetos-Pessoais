#pragma once
#include <vector>
#include <string>

//Esse código mede o tempo de execução de um algoritmo de ordenação

class Benchmark {
public:
    static double measure(void (*sortFunc)(std::vector<int>&), std::vector<int> data);
};
