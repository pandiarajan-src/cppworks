/*
    Purpose:
        The purpose of the program is to find whether are you surrounded by a bounding box
        Predefined bounding box co-ordinate are (0,0) with the widh 10 and height 20

        input (x, y) co-ordinate
        ouput - True if x, y is within the bounding box, else false
*/

#include <iostream>
#include <cmath>

using namespace std;

const int width = 10;
const int height = 20;
const int box_x = 0;
const int box_y = 0;

int main()
{
    cout << "Enter x & y co-ordinates with space : " ;
    int x {0}, y{0};
    cin >> x >> y;
    if( ( std::abs(x) <= ((width/2)) ) && ( std::abs(y)<= ((height/2)) ) ){
        cout << "Yes you are inside the bounding box" << endl;
    }
    else{
        cout << "No you are not inside the bounding box" << endl;
    }
    return 0;
}