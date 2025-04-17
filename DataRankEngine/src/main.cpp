#include <iostream>
#include <vector>
#include <fstream>
#include "Sorter.h"
#include "Benchmark.h"
#include "Utils.h"

int main() {
    std::vector<int> data = Utils::generateRandomVector(10000, 0, 100000);
    std::ofstream out("data/resultados.csv");
    out << "Algoritmo,Tempo(ms)\n";

    out << "QuickSort," << Benchmark::measure(Sorter::quicksort, data) << "\n";
    out << "MergeSort," << Benchmark::measure(Sorter::mergesort, data) << "\n";
    out << "HeapSort," << Benchmark::measure(Sorter::heapsort, data) << "\n";
    out << "ShellSort," << Benchmark::measure(Sorter::shellsort, data) << "\n";

    out.close();
    std::cout << "Benchmark finalizado. Resultados em data/resultados.csv\n";
    return 0;
}
