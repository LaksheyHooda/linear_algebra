#include <iostream>
#include "src/vector3d.hpp"

int main(int argc, char** argv)
{
    std::cout << "testin" << std::endl;
    linalg::Vector3d<double> vector(5.4, 3.1, 2.2);
    linalg::Vector3d<double> vector2(5.4, 3.1, 2.2);
    linalg::Vector3d<double> vector3(3.2, 6.1, 4.4);
    linalg::Vector3d<double> crossv2v3 = linalg::Vector3d<double>::cross(vector2, vector3);
    linalg::Vector3d<double> dotv2v3 = linalg::Vector3d<double>::dot(vector2, vector3);
    std::cout << crossv2v3 << std::endl;
    std::cout << dotv2v3 << std::endl;
    std::cout << vector << std::endl;
    vector = vector + vector2;
    std::cout << vector << std::endl;
    return 0;
}
