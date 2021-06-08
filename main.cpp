#ifndef _SILENCE_CLANG_CONCEPTS_MESSAGE
#define _SILENCE_CLANG_CONCEPTS_MESSAGE
#endif

#include <vector>
#include <iostream>
#include <algorithm>
#include <ranges>

int main()
{
    std::cout << "Hello" << std::endl;

    std::vector<int> test{1, 2, 3, 4, 5, 6, 7};

    for (auto i : test | std::views::filter([](int i)
                                            { return i % 2 == 0; }))
    {
        std::cout << i;
    }

    std::cout << std::endl;
}