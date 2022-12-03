#include <iostream>
#include "src/lib/helloworld.h"

int main()
{
    std::cout << "Main exe execution" << std::endl;
    HelloWorld hObj;
    hObj.PrintMessage();
    return 0;
}