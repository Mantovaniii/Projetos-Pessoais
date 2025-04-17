#include "Sorter.h"
#include <algorithm>

void Sorter::quicksort(std::vector<int>& data) {
    std::sort(data.begin(), data.end()); // simplificado
}
void Sorter::mergesort(std::vector<int>& data) {
    std::stable_sort(data.begin(), data.end()); // simplificado
}
void Sorter::heapsort(std::vector<int>& data) {
    std::make_heap(data.begin(), data.end());
    std::sort_heap(data.begin(), data.end());
}
void Sorter::shellsort(std::vector<int>& data) {
    for (int gap = data.size() / 2; gap > 0; gap /= 2)
        for (size_t i = gap; i < data.size(); ++i) {
            int temp = data[i];
            size_t j = i;
            while (j >= gap && data[j - gap] > temp) {
                data[j] = data[j - gap];
                j -= gap;
            }
            data[j] = temp;
        }
}
