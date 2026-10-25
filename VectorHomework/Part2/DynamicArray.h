#pragma once

#include <cstdlib>
#include <stdexcept>
#include <limits>
#include <algorithm>

class DynamicArray
{
    std::size_t size_;
    double* data_;
public:
    DynamicArray(std::size_t size);
    DynamicArray(std::initializer_list<double> values);
    DynamicArray(const DynamicArray& other);
    DynamicArray(DynamicArray&& other) noexcept;
    ~DynamicArray();

    DynamicArray& operator=(const DynamicArray& other);
    DynamicArray& operator=(DynamicArray&& other) noexcept;

    std::size_t size() const;
    double get(std::size_t index) const;
    void set(std::size_t index, double value);
};
