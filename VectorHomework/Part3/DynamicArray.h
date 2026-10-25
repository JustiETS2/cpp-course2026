#pragma once

#include <cstdlib>
#include <stdexcept>
#include <limits>
#include <algorithm>

template<typename T>
class DynamicArray
{
    std::size_t size_;
    T* data_;
public:
    DynamicArray(std::size_t size)
        : size_{size}, data_{new T[size]}
    {
    }

    DynamicArray(std::initializer_list<T> values)
        : size_{values.size()}, data_{new T[values.size()]}
    {
        std::copy(values.begin(), values.end(), data_);
    }

    DynamicArray(const DynamicArray& other)
        : size_{other.size_}, data_{new T[other.size_]}
    {
        std::copy(other.data_, other.data_ + size_, data_);
    }

    DynamicArray(DynamicArray&& other) noexcept
        : size_{other.size_}, data_{other.data_}
    {
        other.size_ = 0;
        other.data_ = nullptr;
    }

    ~DynamicArray()
    {
        delete[] data_;
    }

    DynamicArray& operator=(const DynamicArray& other)
    {
        if (this == &other)
        {
            return *this;
        }

        T* new_data = new T[other.size_];
        std::copy(other.data_, other.data_ + other.size_, new_data);

        delete[] data_;
        data_ = new_data;
        size_ = other.size_;

        return *this;
    }

    DynamicArray& operator=(DynamicArray&& other) noexcept
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

    std::size_t size() const
    {
        return size_;
    }

    /*
    нет проверки диапазона, как и в стандарте
    */
    T& operator[](std::size_t index)
    {
        return data_[index];
    }

    /*
    для const векторов
    */
    const T& operator[](std::size_t index) const
    {
        return data_[index];
    }

    T& at(std::size_t index)
    {
        if (index >= size_)
        {
            throw std::out_of_range{"index out of range"};
        }

        return data_[index];
    }

    const T& at(std::size_t index) const
    {
        if (index >= size_)
        {
            throw std::out_of_range{"DynamicArray: index out of range"};
        }

        return data_[index];
    }

    T get(std::size_t index) const
    {
        return at(index);
    }

    void set(std::size_t index, const T& value)
    {
        at(index) = value;
    }
};