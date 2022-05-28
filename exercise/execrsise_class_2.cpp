#include <iostream>
  
class Demo {
public:
    Demo() {
        std::cout << "constructor" << std::endl;
        count++;
    }
    
    static int get_count() {
        return count;
    }
    
private:
    static  int count;
};


class DemoDay {
public:
    static int get_day() {
        return days;
    }
    
private:
    static const int days = 30;
};


class Demo2 {
public:
    Demo2(int pa) {
        a = pa;
    }
    
    int do_something() const {
        ++a;
        
        return a;
    }
 
/* 類別中的 const 的成員函數不能修改資料變數的值，
但可修改宣告為 mutable 的成員變數
 */ 
private:
    mutable int a;
};

int Demo::count = 0;

int main() {
    Demo d1;
    std::cout << Demo::get_count() << std::endl;
    Demo d2;
    std::cout << d2.get_count() << std::endl;
    Demo d3;
    std::cout << d3.get_count() << std::endl;
	
	DemoDay d4;
    std::cout << d4.get_day() << std::endl;
	
	Demo2 d5(4);
    std::cout << d5.do_something() << std::endl;
    std::cout << d5.do_something() << std::endl;
	
    
    return 0;
}
