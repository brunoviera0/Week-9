#include <iostream>
#include "Triangle3d.h"

using namespace std;

int main() {

    Point3d p1(0.0, 0.0, 0.0);
    Point3d p2(1.0, 2.0, 0.0);
    Point3d p3(-1.0, 0.0, 0.0);

    Triangle3d triangle(p1, p2, p3);

    cout << "Distance between p1 and p2: " << triangle.pointDistance(p1, p2) << endl;
    cout << "Distance between p1 and p3: " << triangle.pointDistance(p1, p3) << endl;
    cout << "Distance between p2 and p3: " << triangle.pointDistance(p2, p3) << endl;
    cout << "Area of triangle: " << triangle.area() << endl;

    return 0;
}
