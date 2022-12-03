/*
Purpose :
    Program is to find the area of the Hexagon
    Hexagon is a 6 side of equal length shape
    The formula to calculate the hexa gon is (3*sqrt(3) / 2 ) * (a ^ 2)

*/

#include <iostream>
#include <cmath>

using namespace std;

double area_of_hexagon(const int& a)
{
    return (3 * sqrt(3) / 2) * (a * a);
}

int main()
{
    cout << "Enter the length of a hexahon side: ";
    int a {0};
    cin >> a;

    cout << "Area of Hexagon " << area_of_hexagon(a) << std::endl;

}
