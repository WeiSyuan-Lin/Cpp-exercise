#include <iostream>
  
int main() {
    int a, b, c;
    
    a = 99;
    b = 36;
    
    c = a + b;
    std::cout << "a + b = " << c << std::endl;
    
    c = a - b;
    std::cout << "a - b = " << c << std::endl;
    
    c = a * b;
    std::cout << "a * b = " << c << std::endl;
    
    c = a / b;
    std::cout << "a / b = " << c << std::endl;
    
    c = a % b;
    std::cout << "a % b = " << c << std::endl;
    
    char t = 'B';
  
    std::cout << "before: " << t << std::endl;
    
    t = t + 32;
    std::cout << "after : " << t << std::endl;
    
    return 0;
}