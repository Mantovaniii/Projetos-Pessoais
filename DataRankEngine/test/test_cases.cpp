#include <cassert>
#include <vector>
#include "Sorter.h"

int main() {
    std::vector<int> v = {5, 2, 9, 1, 3};
    Sorter::quicksort(v);
    assert(std::is_sorted(v.begin(), v.end()));
    return 0;
}
