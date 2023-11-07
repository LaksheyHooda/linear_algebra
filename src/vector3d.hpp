#pragma once
#include <iostream>

namespace linalg
{
    template <typename T>
    class Vector3d
    {
        public:
            Vector3d(); //default constructor
            Vector3d(T x, T y, T z); //set x,y,z constructore
            Vector3d(const linalg::Vector3d<T>& otherVector); // copy constructor
            ~Vector3d(); //destructor
            T GetX() const;
            void SetX(T val); 
            T GetY() const;
            void SetY(T val); 
            T GetZ() const;
            void SetZ(T val); 
            static Vector3d<T> Cross(Vector3d<T>& a, Vector3d<T>& b);
            static T Dot(Vector3d<T>& a, Vector3d<T>& b);

        private:
            T m_x;
            T m_y;
            T m_z;

    };
}

/**********************************************************************************************
                        ***************METHOD DECLORATIONS**************
**********************************************************************************************/
//Default constructor create a vector <0, 0, 0>
template <typename T>
linalg::Vector3d<T>::Vector3d() 
{
    T x = static_cast<T>(0);
    T y = static_cast<T>(0);
    T z = static_cast<T>(0);
}

template <typename T>
linalg::Vector3d<T>::Vector3d(T x, T y, T z)
: m_x(x), m_y(y), m_z(z)
{
}

template <typename T>
linalg::Vector3d<T>::Vector3d(const linalg::Vector3d<T>& otherVector)
{
    m_x = otherVector.GetX();
    m_y = otherVector.GetY();
    m_z = otherVector.GetZ();
}

template <typename T>
linalg::Vector3d<T>::~Vector3d()
{
    //destroy any new objects created
}

template <typename T>
T linalg::Vector3d<T>::GetX() const
{
    return m_x;
}

template <typename T>
T linalg::Vector3d<T>::GetY() const
{
    return m_y;
}

template <typename T>
T linalg::Vector3d<T>::GetZ() const
{
    return m_z;
}

template <typename T>
void linalg::Vector3d<T>::SetX(T val)
{
    m_x = val;
}

template <typename T>
void linalg::Vector3d<T>::SetY(T val)
{
    m_y = val;
}

template <typename T>
void linalg::Vector3d<T>::SetZ(T val)
{
    m_z = val;
}

template<typename T>
linalg::Vector3d<T> linalg::Vector3d<T>::Cross(Vector3d<T>& a, Vector3d<T>& b)
{
    //TODO fix cross
    linalg::Vector3d<T> ref;
    return ref;
}

template<typename T>
T linalg::Vector3d<T>::Dot(Vector3d<T>& a, Vector3d<T>& b)
{
    //TODO: fix dot product
    return a.GetX();
}

//Operator overloads
template<typename T>
std::ostream & operator << (std::ostream &out, const linalg::Vector3d<T> &v)
{
    out << "<" << v.GetX() << "," << v.GetY() << "," << v.GetZ() << ">";
    return out;
}

template<typename T>
linalg::Vector3d<T> operator+(linalg::Vector3d<T> const& vector1, linalg::Vector3d<T> const& vector2)
{
    linalg::Vector3d<T> res;
    res.SetX(vector1.GetX() + vector2.GetX()); 
    res.SetY(vector1.GetY() + vector2.GetY()); 
    res.SetZ(vector1.GetZ() + vector2.GetZ()); 
    return res;
}

//Scaler multiplication
template<typename T>
linalg::Vector3d<T> operator*(linalg::Vector3d<T> const& vector1, T const num)
{
    linalg::Vector3d<T> res;
    res.SetX(vector1.GetX() * num); 
    res.SetY(vector1.GetY() * num); 
    res.SetZ(vector1.GetZ() * num); 
}