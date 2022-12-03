#include <iostream>

using namespace std;

int power(int base, int exponent)
{
    if(exponent < 0)
    {
        return -1;
    }
    if(exponent == 0)
    {
        return 1;
    }
    return (base * power(base, exponent-1));
}

int main()
{
    cout << power(2, 2) << endl;
    cout << power(2, 3)<< endl;
    cout << power(5, 4)<< endl;
    cout << power(56, 5)<< endl;
    return 0;
}