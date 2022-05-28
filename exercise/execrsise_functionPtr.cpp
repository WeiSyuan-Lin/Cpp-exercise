#include <iostream>
  
void fun1(void) {
    std::cout << "fun1" << std::endl;
}

int fun2(int n) {
    return 0;
}

int main() {
    void (*f1Ptr)(void) = fun1;
    int (*f2Ptr)(int) = fun2;
    
    f1Ptr();
    std::cout << f2Ptr(1) << std::endl;
    
    return 0;
}