#pragma once
#include <vector>
#include <string>
#include <functional>

class Sorter {
public:
    using SortFunction = std::function<void(std::vector<int>&)>;

    static void quicksort(std::vector<int>& data);
    static void mergesort(std::vector<int>& data);
    static void heapsort(std::vector<int>& data);
    static void shellsort(std::vector<int>& data);
};
