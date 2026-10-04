#include "Utility.h"

bool isEqual(double a, double b)
{
    return std::abs(a - b) < EPSILON;
}