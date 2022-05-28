#include <iostream>
  
class Demo {
public:
    Demo() {
        a = 1;
        b = 1;
    }
    
    Demo(int pa, int pb) {
        a = pa;
        b = pb;
    }
    
    Demo operator+(const Demo& p) {
        Demo demo;
        demo.a = this->a + p.a;
        demo.b = this->b + p.b;
        
        return demo;
	}
		
	Demo operator*(const Demo& p) {
        Demo demo;
        demo.a = this->a*p.a;
        demo.b = this->b*p.b;
        
        return demo;
    }
    
    void do_something() {
        std::cout << a + b << std::endl;
    }
    
private:
    int a;
    int b;
};

int main() {
    Demo d1(2, 6);
    d1.do_something();
    Demo d2(10, 24);
    d2.do_something();
    Demo d3;
    d3 = d1 + d2;
    d3.do_something();
	
	Demo d4;
    d4 = d1 * d2;
    d4.do_something();

    
    return 0;
}
