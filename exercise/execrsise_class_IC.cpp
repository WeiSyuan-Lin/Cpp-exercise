#include <iostream>
  
class Demo {
public:
    int a;
    int b;
    
    int do_something() {
        return a + b;
    }
};

int main() {
    Demo d;
    d.a = 11;
    d.b = 22;
    std::cout << d.do_something() << std::endl;
    
    return 0;
}
