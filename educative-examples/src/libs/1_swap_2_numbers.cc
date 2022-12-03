#include <iostream>

void swap_numbers_with_temp_variable(int& a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap_numbers_without_temp_var(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void swap_test()
{
    int a = 1;
    int b = 2;
    std::cout << "a = " << a << " b = " << b <<std::endl;
    swap_numbers_with_temp_variable(a, b);
    std::cout << "a = " << a << " b = " << b <<std::endl;
    swap_numbers_without_temp_var(a,b);
    std::cout << "a = " << a << " b = " << b <<std::endl;
}


