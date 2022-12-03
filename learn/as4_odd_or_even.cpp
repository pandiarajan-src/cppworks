#include <iostream>

using namespace std;

int main()
{
    cout << "Please type in an integral value : " << std::endl;
    unsigned int val;
    cin >> val;
    if((val%2) == 0){
        cout << val << " is even" << std::endl;
    }
    else{
        cout << val << " is odd" << std::endl;
    }
}