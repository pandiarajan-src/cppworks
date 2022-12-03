#include <iostream>

auto add = [](auto number1, auto number2){return number1 + number2;};
auto subtract = [](auto number1, auto number2){return number1 - number2;};
auto multiply = [](auto number1, auto number2){return number1 * number2;};
auto divide = [](auto number1, auto number2){return number1 / number2;};

double test(double number1, char operation, double number2)
{
    double res = 0.0;
    switch(operation)
    {
        case '+':
            res = add(number1, number2);
            break;
        case '-':
            res = subtract(number1, number2);
            break;
        case '*':
            res = multiply(number1, number2);
            break;
        case '/':
            res = divide(number1, number2);
            break;
        default:
            std::cout << "invalid operation...";
            res = 0.0;
            break;                                  
    }
    std::cout << res << std::endl;
    return res;
}

int main()
{
    test(5, '+', 10);
    test(5, '-', 10);
    test(5, '*', 10);
    test(5, '/', 10);
    return 0;
}

