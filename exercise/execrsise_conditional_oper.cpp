#include <iostream>

int main(){
	int a = 22;
    int b = 34;
	int max;
    
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << (a > b ? a : b) << " 比較大。" << std::endl;
    
	int sex1 = 0;
    int sex2 = 1;
    
    std::cout << (sex1 ? "She" : "He") << " is here." << std::endl;
    std::cout << (sex2 ? "She" : "He") << " is running." << std::endl;
	
	max = (a > b) ? a : b;
	std::cout << "max = " << max << std::endl;
	return 0;
}