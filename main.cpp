#include <iostream>
#include "src/vector3d.hpp"

int main(int argc, char** argv)
{
    std::cout << "testin" << std::endl;
    linalg::Vector3d<double> vector(5.4, 3.1, 2.2);
    linalg::Vector3d<double> vector2(5.4, 3.1, 2.2);
    std::cout << vector << std::endl;
    vector = vector + vector2;
    std::cout << vector << std::endl;
    return 0;
}
