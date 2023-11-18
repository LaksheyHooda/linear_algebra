#include "unit_test_vector3d.h"

TEST(vector3d, dot_product_test)
{
    linalg::Vector3d<double> testVec1(2.2, 3.3, 2.4);
    linalg::Vector3d<double> testVec2(2.4, 3.1, 2.2);

    double dotv2v3 = linalg::Vector3d<double>::Dot(testVec1, testVec2);
    double expectedDot = 20.79;

    ASSERT_EQ(dotv2v3, expectedDot);
}