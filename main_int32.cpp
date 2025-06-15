#include <vector>
#include <cstdint>
#include <chrono>
#include <iostream>
#include "constant.h"

int main(int argc, char* argv[])
{
    std::vector<int32_t> test(NUMBER_OF_ELEMENTS, 1);
    int64_t sum = 0;
    auto start = std::chrono::high_resolution_clock::now();
    for(int i = 0; i < NUMBER_OF_ELEMENTS; ++i)
    {
        sum += test[i];
    }

    return 0;
}