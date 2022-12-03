#include <functional>
#include <iostream>
using namespace std;

std::function<int(int)> makeLambda(int a){    
    return [a](int b){ return a + b; };
}

int main(){
    
    auto add5 = makeLambda(5);      
    
    auto add10 = makeLambda(10);      
    std::cout << add5(20) << endl;
    std::cout << add10(100) << endl;
    std::cout << add5(10) << endl;
    std::cout << add10(5) << endl;

    cout << (add5(10) == add10(5));               
    
}