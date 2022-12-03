#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

double convert_fahrenheit_2_centigrate(double temp)
{
    return ((9.0/5)*temp) + 32;
}

int main()
{
    cout << "Please enter a degree value in Celsius : " << std::endl;
    double temp = {0.0};
    cin >> temp;
    //cout << std::setprecision(2);
    cout << temp << " Celsius is " <<convert_fahrenheit_2_centigrate(temp) << " Fahrenheit" <<std::endl;

}