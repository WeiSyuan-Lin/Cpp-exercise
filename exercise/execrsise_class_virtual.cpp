#include <iostream>
class Demo {
public:
    Demo() {
        a = 1;
        b = 1;
    }
    
    int do_something() {
        return a + b;
    }
    
protected:
    int a;
    int b;
};

/* 
有從相同Class繼承時使用 virtual
避免繼承混亂
 */
class Demo2: virtual public Demo {};

class Demo3: virtual public Demo {};

class Demo4: public Demo2, public Demo3 {};

int main() {
    Demo4 d;
    std::cout << d.do_something() << std::endl;
    
    return 0;
}
