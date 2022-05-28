#include <iostream>
  
class Demo {
public:
    Demo(int pa, int pb) {
        a = pa;
        b = pb;
    }
    
    friend int do_something(Demo& d) {
        return d.a + d.b;
    }
    
    friend class Demo2;

private:
    int a;
    int b;
};

class Demo2 {
public:
    int do_something2(Demo& d) {
        return d.a + d.b;
    }
};

int main() {
    Demo d(32, 22);
    std::cout << do_something(d) << std::endl;
    Demo2 d2;
    std::cout << d2.do_something2(d) << std::endl;
    
    return 0;
}