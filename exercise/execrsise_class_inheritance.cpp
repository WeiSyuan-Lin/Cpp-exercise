#include <iostream>
  
class Demo {
public:
    Demo() {
        a = 10;
        b = 33;
    }
	void myprint(){
		std::cout<<"hello"<<std::endl;
	}
	
	
protected:
    int a;
    int b;
};

class Demo2: Demo {
public:
    int do_something() {
        return a + b;
    }
	int getter_a(){
		return a;
	}
	void myprint2(){
		myprint();
		myprint();
	}
	
    
};


class Demo3 {
public:
    Demo3() {
        a = 702;
        b = 631;
    }

protected:
    int a;
    int b;
};

class Demo4 {
public:
    Demo4() {
        c = 548;
        d = 255;
    }
    
protected:
    int c;
    int d;
};

class Demo5: Demo3, Demo4 {
public:
    int do_something() {
        return a + b + c + d;
    }
};


int main() {
    Demo2 d;
    std::cout << d.do_something() << std::endl;
	std::cout << d.getter_a() << std::endl;
	
    d.myprint2();
	
	Demo5 d0;
    std::cout << d0.do_something() << std::endl;
    
	
	
	
    return 0;
}
