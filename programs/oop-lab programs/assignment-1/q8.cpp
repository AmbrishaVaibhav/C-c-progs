#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double area(float a_207)
{
    float s_207 = sqrt(3) / 4.0 * pow(a_207, 2);
    return s_207;
}
double area(float a_207, float b_207)
{
    float s_207 = 1 / 2.0 * (sqrt(((a_207 * a_207) - ((b_207 * b_207) / 4))) * b_207);
    return s_207;
}
double area(float a_207, float b_207, float c_207)
{
    float s_207 = (a_207 + b_207 + c_207) / 2.0;
    float area_207 = sqrt(s_207 * (s_207 - a_207) * (s_207 - b_207) * (s_207 - c_207));
    return area_207;
}
int main()
{
    cout << "Area of scalene triangle : " << fixed << setprecision(2) << area(10.4f, 15.0f, 20.5f) << endl;
    cout << "Area of equilateral triangle: " << fixed << setprecision(2) << area(5.5f)
         << endl;
    cout << "Area of isosceles triangle : " << fixed << setprecision(2) << area(6.6f, 12.2f);
    return 0;
}