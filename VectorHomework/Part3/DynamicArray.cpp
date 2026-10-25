#include "DynamicArray.h"

DynamicArray::DynamicArray(std::size_t size) : size_{size}, data_{new double[size]}
{
}

DynamicArray::DynamicArray(std::initializer_list<double> values)
    : size_{values.size()}, data_{new double[values.size()]}
{
    std::copy(values.begin(), values.end(), data_);
}

DynamicArray::DynamicArray(const DynamicArray& other)
    : size_{other.size_}, data_{new double[other.size_]}
{
    std::copy(other.data_, other.data_ + size_, data_);
}

DynamicArray::DynamicArray(DynamicArray&& other) noexcept
    : size_{other.size_}, data_{other.data_}
{
    other.size_ = 0;
    other.data_ = nullptr;
}

DynamicArray::~DynamicArray()
{
    delete[] data_;
}

DynamicArray& DynamicArray::operator=(const DynamicArray& other)
{
    if (this == &other)
    {
        return *this;
    }

    double* new_data = new double[other.size_];
    std::copy(other.data_, other.data_ + other.size_, new_data);

    delete[] data_;
    data_ = new_data;
    size_ = other.size_;

    return *this;
}

DynamicArray& DynamicArray::operator=(DynamicArray&& other) noexcept
{
    if (this == &other)
    {
        return *this;
    }

    delete[] data_;

    data_ = other.data_;
    size_ = other.size_;

    other.data_ = nullptr;
    other.size_ = 0;

    return *this;
}

std::size_t DynamicArray::size() const
{
    return size_;
}

double DynamicArray::get(std::size_t index) const
{
    if (index >= size_)
    {
        return std::numeric_limits<double>::max();
    }

    return data_[index];
}

void DynamicArray::set(std::size_t index, double value)
{
    if (index < size_ && index >= 0)
    {
        data_[index] = value;
    }

    else
    {
        //exception
    }
}
