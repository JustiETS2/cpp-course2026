#pragma once
#include <iostream>
#include <vector>

std::ostream& operator<<(std::ostream& stream, std::vector<short>& vec)
{
    for (short& c : vec)
    {
        std::cout << c << " ";
    }

    return stream;
}
