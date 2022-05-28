#include <iostream>
#include <string>

class Demo {
public:
    Demo(std::string s) {
        std::cout << "constructor" << std::endl;
        a_ptr = new std::string;
        *a_ptr = s;
    }
    
    Demo(const Demo& obj) {
        std::cout << "copy constructor" << std::endl;
        a_ptr = new std::string;
        *a_ptr = *obj.a_ptr;
    }
/* 	
	解構函數 (destructor) 為程式結束執行銷毀物件之用
	
 */	
	~Demo() {
        std::cout << "destructor" << std::endl;
        delete a_ptr;
    }
    
    void set_a(std::string s) {
        *a_ptr = s;
    }
    
    void do_something() {
        std::cout << *a_ptr << std::endl;
    }
    
private:
    std::string *a_ptr;
};

int main() {
    Demo d1("There is no spoon.");
    d1.do_something();
    Demo d2 = d1;
    d2.do_something();
    
    d1.set_a("What's truth?");
    d1.do_something();
    d2.do_something();
    
    return 0;
}