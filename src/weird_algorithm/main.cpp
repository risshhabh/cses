#include <iostream>

int main()
{
    int last{};
    std::cin >> last;

    while (last != 1)
    {
        if (last % 2 == 0)
        {
            printf("%d ", last);
            last = last / 2;
        }
        else
        {
            printf("%d ", last);
            last = last * 3 + 1;
        }
    }
    printf("%d", 1);

    return 0;
}
