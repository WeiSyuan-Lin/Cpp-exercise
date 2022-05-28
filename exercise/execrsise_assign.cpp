#include <iostream>

int main(){
	int a = 4;
    int b = 3;
    
    std::cout << (a += b) << std::endl;
    std::cout << (a -= b) << std::endl;
    std::cout << (a *= b) << std::endl;
    std::cout << (a /= b) << std::endl;
    std::cout << (a %= b) << std::endl;
	
	std::cout << (a <<= 2) << std::endl;
    std::cout << (a >>= 2) << std::endl;
    std::cout << (a &= b) << std::endl;
    std::cout << (a |= b) << std::endl;
    std::cout << (a ^= b) << std::endl;
	
	return 0;
}