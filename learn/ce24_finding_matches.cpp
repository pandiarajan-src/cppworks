#include <iostream>
#include <string>

using namespace std;

void find_matches_in_list(const string data[], const ushort& size, const string& key)
{
    for(ushort index = 0; index < size; index++)
    {
        if( data[index].find(key) != std::string::npos)
        {
            cout << data[index] << endl;
        }
    }
}

int main()
{
    std::string input[] {"catching", "iteration", "iterate", "fresh", "outside", "mercy"};
    find_matches_in_list(input, 5, "iter");
}