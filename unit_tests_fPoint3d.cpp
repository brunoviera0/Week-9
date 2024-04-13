#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Point3d.h"
#include "Triangle3d.h"

using namespace doctest;

TEST_CASE("Default Constructor") {
    Point3d p3d;
    CHECK(p3d.get_x() == 0);
    CHECK(p3d.get_y() == 0);
    CHECK(p3d.get_z() == 0);
}

TEST_CASE("Area Calculation") {
    Point3d p1(0, 0, 0);
    Point3d p2(1, 0, 0);
    Point3d p3(0, 1, 0);
    Triangle3d triangle(p1, p2, p3);
    CHECK(triangle.area() == Approx(0.5).epsilon(0.01));
}

TEST_CASE("Edge Case") {
    Point3d p1(0, 0, 0);
    Point3d p2(2, 2, 2);
    Point3d p3(4, 4, 4); //points form a line
    Triangle3d triangle(p1, p2, p3);
    CHECK(triangle.area() == Approx(0.0));
}
