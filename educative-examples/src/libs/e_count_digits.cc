#include <iostream>

using namespace std;

int count_digits(int number)
{
    if(number == 0)
    {
        return 0;
    }
    // if(abs(number)/10 >= 0)
    // {
    //     return 1;
    // }
    return 1 + count_digits(number/10);
}

int main()
{
    cout << count_digits(12345) << endl;
    cout << count_digits(-900002) << endl;
    return 0;
}