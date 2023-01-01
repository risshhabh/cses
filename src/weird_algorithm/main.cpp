#include <iostream>

int main()
{
    long unsigned int last{};
    std::cin >> last;

    while (last != 1)
    {
        if (last % 2 == 0)
        {
            std::cout << last << " ";
            last = last / 2;
        }
        else
        {
            std::cout << last << " ";
            last = last * 3 + 1;
        }
    }
    std::cout << 1;

    return 0;
}
