#pragma once
#include "Utility.h"
#include "Shape.h"

bool operator==(const Shape& a, const Shape& b)
{
    return isEqual(a.area(), b.area());
}


bool operator^(const Shape& a, const Shape& b)
{
    return isEqual(a.perimeter(), b.perimeter());
}
