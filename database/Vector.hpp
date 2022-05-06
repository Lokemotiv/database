#pragma once

#include <initializer_list>

namespace Database{
    template <typename T>
    class Vector
    {
    private:
        T* arr = nullptr;
        size_t currentSize = 0, currentCapacity = 0;
        int capIncrease[2] = { 1, 2 };

    public:

        constexpr void changeCapIncrease(const char x, const int y);

        constexpr Vector();
        constexpr Vector(const Vector<T>& vector);
        constexpr Vector(const std::initializer_list<T> initializerList);
        constexpr Vector(const T arr[]);
        constexpr Vector(const size_t capacity_);
        constexpr ~Vector();

        constexpr T& operator[] (const size_t index);
        constexpr Vector<T> operator() (const size_t startIndex, const size_t endIndex);

        constexpr Vector<T>& operator= (const Vector<T>& vector);
        constexpr Vector<T>& operator= (const std::initializer_list<T>& initializerList);
        constexpr Vector<T>& operator= (const T arr[]);

        constexpr bool operator== (const Vector<T>& vec);
        constexpr bool operator== (const std::initializer_list<T>& initializerList);
        constexpr bool operator== (const T arr[]);
        constexpr bool operator!= (const Vector<T>& vec);
        constexpr bool operator!= (const std::initializer_list<T>& initializerList);
        constexpr bool operator!= (const T arr[]);

        constexpr bool empty();
        constexpr void clear();
        constexpr size_t size();
        constexpr size_t capacity();
        constexpr void reserve(const size_t newCapacity);
        constexpr T* data();
        constexpr void shrinkToFit();

        constexpr T* begin();
        constexpr T* end();

        constexpr T* begin() const;
        constexpr T* end() const;

        constexpr void pushBack(const T val);
        constexpr void popBack();

        constexpr void insert(const size_t index, const T val);
        constexpr void insert(const size_t index, const Vector<T>& vector);
        constexpr void insert(const size_t index, const std::initializer_list<T> initializerList);
        constexpr void insert(const size_t index, const T arr[]);

        constexpr void pop(const size_t index);
        constexpr void pop(const size_t startIndex, const size_t endIndex);

        constexpr Vector<T>& mergeSort();
        constexpr Vector<T>& bubbleSort();

        constexpr size_t binarySerch(const T val);
    }; 
}

#include "Vector.tpp"

