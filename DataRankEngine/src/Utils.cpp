#include "Utils.h"
#include <cstdlib>
#include <ctime>

namespace Utils {
    std::vector<int> generateRandomVector(size_t size, int min, int max) {
        std::vector<int> vec(size);
        std::srand(std::time(nullptr));
        for (auto& v : vec)
            v = min + std::rand() % (max - min + 1);
        return vec;
    }
}
