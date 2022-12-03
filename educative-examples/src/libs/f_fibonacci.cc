#include <iostream>

using namespace std;

int fibonacci(int data)
{
    if(data == 0)
    {
        return 0;
    }
    if(data == 1 || data == 2)
    {
        return 1;
    }
    return fibonacci(data-1) + fibonacci(data-2);
}

int main()
{
    
    cout << fibonacci(0) << endl;
    cout << fibonacci(1) << endl;
    cout << fibonacci(2) << endl;
    cout << fibonacci(6) << endl;
    cout << fibonacci(8) << endl;
    cout << fibonacci(13) << endl;
    return 0;
}