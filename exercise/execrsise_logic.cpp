#include <iostream>

int main(){
	bool a= false;
	int b=0;
	double c=0.0;
	int d=1;
	
	std::cout << a << std::endl;
    std::cout << !a << std::endl;
    std::cout << b << std::endl;
    std::cout << !b << std::endl;
    std::cout << c << std::endl;
    std::cout << !c << std::endl;
	
	std::cout << (a && b) << std::endl;
    std::cout << (a && a) << std::endl;
    std::cout << (b && b) << std::endl;
    std::cout << (c && c) << std::endl;
    std::cout << (c && d) << std::endl;
    std::cout << (d && d) << std::endl;
	
	std::cout << (a || b) << std::endl;
    std::cout << (a || a) << std::endl;
    std::cout << (b || b) << std::endl;
    std::cout << (c || c) << std::endl;
    std::cout << (c || d) << std::endl;
    std::cout << (d || d) << std::endl;
	
	return 0;
}