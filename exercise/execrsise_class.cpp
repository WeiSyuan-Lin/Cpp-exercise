#include <iostream>
  
  
class Demo {
public:
    Demo(int pa, int pb) {
        a = pa;
        b = pb;
    }
    
    int do_something() {
        return a + b;
    }
    
private:
    int a;
    int b;
};
  
class Demo2 {
public:
    int a;
    int b;
    /* 建構函數 (constructor) 是一種特別的成員函數，
	與類別同名並且沒有回傳值 (return value) ，
	因為這是在類別實際建立物件時執行
     */
	 Demo2() {
        a = 22;
        b = 33;
    }
    
    explicit  Demo2(int pa, int pb) {
        a = pa;
        b = pb;
    }
	
	// Demo2(int pa, int pb): a(pa), b(pb) {
        // std::cout << "constructor.." << std::endl;
    // }
    
    int do_something() {
        return a + b;
    }
};

int main() {
    Demo2 d2;
    std::cout << d2.do_something() << std::endl;
    
	Demo d(12, 10);
    std::cout << d.do_something() << std::endl;
	// std::cout << d.a << std::endl;
	
    return 0;
}
