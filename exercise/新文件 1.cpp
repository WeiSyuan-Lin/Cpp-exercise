// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

#include <string>
using namespace std;

int main() {
    
    // Write C++ code here
    string w("today is Wednesday");
    std::cout << "Hello world!" << endl << w;
    std::cout << endl;
    std::cout << "bool: " << sizeof(bool)<< endl;
    
    int a = -100;
    int b = abs(a);
    
    std::cout << "a: " << a << std::endl;
    std::cout << "abs(a): " << b << std::endl;
    std::cout << log10(b) << endl;

    return 0;
}