#pragma once

#include "cstdlib"
#include <stdexcept>
#include <limits>

class DynamicArray
{
    std::size_t size_;
    double* data_;
public:
    DynamicArray(double size);
    ~DynamicArray();

    std::size_t size() const;
    double get(std::size_t index) const;
    void set(std::size_t index, double value);
};