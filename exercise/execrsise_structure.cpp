#include <iostream>
#include <string>
struct Demo {
    int member1;
    char  *member2;
    float member3;
	
	void member4();
};

union Demo2 {
    int member1;
    float member2;
    char *member3;
};

void Demo::member4(){
	std::cout<<"Do something!" << std::endl;
}

int main() {
    Demo d;
    d.member1 = 19823;
    d.member2 = "203";
    d.member3 = 3.011;
    
    std::cout << "member1: " << d.member1 << std::endl;
    std::cout << "member2: " << d.member2 << std::endl;
    std::cout << "member3: " << d.member3 << std::endl;
    
	d.member4();
	
	
	
	Demo2 d2;
    d2.member1 = 1;
    d2.member2 = 2.0;
    // d2.member3 = "3";
    
    std::cout << "member1: " << d2.member1 << std::endl;
    std::cout << "member2: " << d2.member2 << std::endl;
    // std::cout << "member3: " << d2.member3 << std::endl;
    
    return 0; 
}