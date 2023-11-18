#include <iostream>
#include "vector3d.hpp"

int main(int argc, char** argv)
{
    std::cout << "testin" << std::endl;
    linalg::Vector3d<double> vector(5.4, 3.1, 2.2);
    linalg::Vector3d<double> vector2(5.4, 3.1, 2.2);
    linalg::Vector3d<double> vector3(3.2, 6.1, 4.4);
    linalg::Vector3d<double> crossv2v3 = linalg::Vector3d<double>::Cross(vector2, vector3);
    double dotv2v3 = linalg::Vector3d<double>::Dot(vector2, vector3);
    std::cout << crossv2v3 << std::endl;
    std::cout << dotv2v3 << std::endl;
    std::cout << vector << std::endl;
    vector = vector + vector2;
    std::cout << vector << std::endl;
    vector = vector * -2.0;
    std::cout << vector << std::endl;
    double magnitude = linalg::Vector3d<double>::Magnitude(vector);
    std::cout << magnitude << std::endl;
    linalg::Vector3d<double> unitv1 = linalg::Vector3d<double>::UnitVector(vector);
    std::cout << unitv1 << std::endl;


    return 0;
}
