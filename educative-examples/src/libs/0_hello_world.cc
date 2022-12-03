#include <iostream>
#include "0_hello_world.h"

using namespace std;

std::string SimpleHelloWorld()
{
    std::string hello_world = "Hi! Hello World? How are you doing?";
    cout << hello_world << std::endl;
    return hello_world;
}
// std::vector<std::string> VectorHelloWorld()
// {
//     std::vector<std::string> hello_vector = std::vector<std::string>("Hi!", "Hello", "World?", "How", "are", "you", "doing?");
//     for (auto &&item : hello_vector)
//     {
//         cout << item;
//     }
//     cout << std::endl;
    
//     return hello_vector;
// }