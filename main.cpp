#include <vector>
#include <iostream>
#include <algorithm>
#include <ranges>

int main()
{
    std::cout << "Hello" << std::endl;

    std::vector<int> test{1, 2, 3, 4, 5, 6, 7};

    auto evens = [](int i)
    { return i % 2 == 0; };
    auto square = [](int i)
    { return i * i; };

    for (auto i : test | std::views::filter(evens)
                       | std::views::transform(square)
                       | std::views::take_while([](int i) { return i < 10; }))
    {
        std::cout << i << ' ';
    }

    std::cout << std::endl;
}