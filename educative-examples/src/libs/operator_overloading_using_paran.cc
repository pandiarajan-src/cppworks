#include <iostream>
#include <vector>

using namespace std;

class SumMe
{
    private:
        int sum;
    public:
        SumMe() : sum(0)
        {

        }
        void operator ()(int x)
        {
            sum += x;
        }
        int getSum()
        {
            return sum;
        }
};

int main()
{
    std::vector<int> int_vec = {1, 2, 3, 4, 5, 6, 7};

    SumMe sm = std::for_each(int_vec.begin(), int_vec.end(), SumMe());
    cout << sm.getSum();

    return 0;
}