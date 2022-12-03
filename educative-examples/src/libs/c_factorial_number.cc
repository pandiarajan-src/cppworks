#include <iostream>

using namespace std;

double factorial(double operand)
{
    // Invalid case, hopefully this should never occur
    // unless the main calling method itself has -ve value
    if(operand < 0)
    {
        return -1;
    }
    if(operand == 1 || operand == 0)
    {
        return 1;
    }
    else
    {
        return operand * factorial(operand-1);
    }
}

int main()
{
    for(int i = 0; i < 10; i++){
        cout << factorial(i) <<endl;
    }
    return 0;
}