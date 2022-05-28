#include <iostream>
  
template <typename T1, typename T2> T1 do_something(const T1& a, const T2& b) {
    return a + b;
}

int main() {
    std::cout << do_something(1, 10) << std::endl;
    std::cout << do_something(10.5,1) << std::endl;
    std::cout << do_something(2.5, 6.32) << std::endl;
    
    return 0;
}