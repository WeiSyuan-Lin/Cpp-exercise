#include <iostream>
  
int main() {
    int a = 22;
    int& a_ref = a;
    
    std::cout << "a: " << a << std::endl;
    std::cout << "a_ref: "<< a_ref << std::endl;
    
    a = 11;
    std::cout << "a: " << a << std::endl;
    std::cout << "a_ref: " << a_ref << std::endl;
    
    return 0;
}