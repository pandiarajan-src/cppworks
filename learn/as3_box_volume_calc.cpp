#include<iostream>

using namespace std;

int main()
{
    cout << "Welcome to box calculator. Please type in length, width and height information : " << std::endl;
    double length, height, width = {0.0};
    cout << "length: "; cin >> length;
    cout << "height: "; cin >> height;
    cout << "width: "; cin >> width;
    cout << "The base area is : " << length * height << std::endl;
    cout << "The volume is : " << length * height * width << std::endl;
}
