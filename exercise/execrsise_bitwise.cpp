#include <iostream>
 #include <typeinfo>
int main(){
	int a=192;
	int b=64;
	std::cout << (~a) << std::endl;
    std::cout << (b << 2) << std::endl;
    std::cout << (b >> 2) << std::endl;
    std::cout << (a & b) << std::endl;
    std::cout << (a | b) << std::endl;
    std::cout << (a ^ b) << std::endl;
	
	std::cout << "bool : " << sizeof(bool) << std::endl;
    std::cout << "char : " << sizeof(char) << std::endl;
    std::cout << "int : " << sizeof(int) << std::endl;
    std::cout << "double : " << sizeof(double) << std::endl;
	std::cout << "sum " << sizeof (b/a) << std::endl;
	
	std::cout << "bool : " <<typeid(a==b).name() << std::endl;
    std::cout << "short : " << typeid(short).name() << std::endl;
    std::cout << "int : " << typeid(a+b).name() << std::endl;
    std::cout << "double : " << typeid(double).name() << std::endl;
	
	return 0;
}