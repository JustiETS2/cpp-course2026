#include "DynamicArray.h"

DynamicArray::DynamicArray(double size) : size_{size}, data_{new double[size]}
{
    for (std::size_t i; i < size; i++)
    {
        data_[i] = 0;
    }
}

DynamicArray::~DynamicArray()
{
    delete[] data_;
}

std::size_t DynamicArray::size() const
{
    return size_;
}

double DynamicArray::get(std::size_t index) const
{
    if (index >= size_ || index < 0)
    {
        return std::numeric_limits<double>::max();
    }

    return data_[index];
}

void DynamicArray::set(std::size_t index, double value)
{
    if (index >= size_ || index < 0)
    {
        //exception
    }

    else
    {
        data_[index] = value;
    }
}
