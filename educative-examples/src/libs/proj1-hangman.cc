#include <iostream>

using namespace std;

const int max_guess_allowed = 7;
const char word[5] = {'s', 'u', 'p', 'e', 'r'};
const int word_len = 5;

int main()
{
    cout << "Max allowed guess is " << max_guess_allowed << endl;
    int found = 0;
    for(int i = 0; i < max_guess_allowed; i++)
    {
        char entered;
        cin >> entered;
        for(int w = 0; w < word_len; w++)
        {
            if(entered == word[i])
            {
                found++;
                break;
            }
        }
        if(found == word_len)
        {
            break;
        }
    }
    if(found == word_len)
    {
        cout << "You won";
    }
    else{
        cout << "You lost";
    }
    return 0;
}