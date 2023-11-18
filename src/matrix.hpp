#pragma once
#include <cmath>
#include <iostream>

namespace linalg
{
    template<typename T>
    class Matrix
    {
    public:
        Matrix(size_t r, size_t c);
        Matrix(const Matrix& otherMatrix);
        Matrix(T** )
    private:
        T** data;
        size_t m_rows;
        size_t m_columns;
    };
}
