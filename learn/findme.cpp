//
// findme.cpp
// Purpose: to find a basic information about the user and report the details.
//

#include <iostream>

using namespace std;

void get_user_native()
{
    cout << "Where do you live? " << std::endl;
    string native_loc;
    getline(cin, native_loc);
    cout << "I've heard great things about " << native_loc << ". I'd like to go sometime" << std::endl;
}

int main()
{
    get_user_native();

    std::cout << "Welcome to findme, please enter the details." << std::endl;
    
    std::string first_name;
    std::cout << "What is your first name? :";
    std::cin >> first_name;

    string last_name;
    std::cout << "What is your last name? :";
    
    // getline won't work after the usage of >> (inputsteam)
    // hence to make getline() work after >> either you have to use cin.ingore()
    std::cin.ignore();

    std::getline(std::cin, last_name);

    int age;
    std::cout << "What is your age? :";
    std::cin >> age;

    cout << "First name: " << first_name << " Last name: " + last_name << " Age: " << age << std::endl;

    return 0;
}