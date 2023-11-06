#include <iostream>
#include "src/test_class.h"

int main(int argc, char** argv)
{
    std::cout << "testin" << std::endl;
    test_class* test = new test_class();
    delete test;
    return 0;
}
