#include "Operations.h"

std::ostream &operator<<(std::ostream &stream, std::vector<short> &&vec)
{
    for (short& c : vec)
    {
        std::cout << c << " ";
    }

    return stream;
}
