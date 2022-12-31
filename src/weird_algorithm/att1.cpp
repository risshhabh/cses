#include <iostream>
#include <string>
#include <vector>

std::string join(std::vector<int> vec, std::string separator = " ")
{
    std::string joined_string{""};

    for (int i : vec)
    {
        joined_string += std::to_string(i);
        joined_string += separator;
    }

    // Remove last separator (ex: '1,2,3,' -> '1,2,3')
    long unsigned int last_sep_idx = joined_string.rfind(separator); // Get indices of last separator.
    joined_string.replace(last_sep_idx, separator.length(), "");

    return joined_string;
}

std::string hailstone(int input)
{
    std::vector<int> sequence{input};

    // Create sequence
    while (true)
    {
        int last = sequence.back();
        if (last == 1) // Hailstone sequence ends once it reaches 1.
        {
            break;
        }

        if (last % 2 == 0) // Even
        {
            sequence.push_back(last / 2);
        }

        else // Odd
        {
            sequence.push_back(last * 3 + 1);
        }
    }

    return join(sequence);
}

int main()
{

    int global_input{};
    std::cin >> global_input;

    std::cout << hailstone(global_input);

    return 0;
}
