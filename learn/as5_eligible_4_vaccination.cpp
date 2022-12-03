#include <iostream>

using namespace std;

int main()
{
    cout << "Please type in your age : " << std::endl;
    unsigned short age;
    cin >> age;
    if( age >= 21 && age <= 39)
    {
        cout << "You are eligible for treatment" << std::endl;
    }
    else{
        cout << "You are NOT eligible for treatment" << std::endl;
    }
}