#include <iostream>

using namespace std;

int main(){
	int a=11;
	int* a_ptr=&a;
	
	std::cout << "a_ptr: " << a_ptr << std::endl;
    std::cout << "*a_ptr: " << *a_ptr << std::endl;
    
	
	int n = 1;
    int* p = &n;
    void* p2 = p;
    int* p3 = static_cast<int*>(p2);
    
    std::cout << "n: " << n << std::endl;
    std::cout << "p: " << p << std::endl;
    std::cout << "*p3: " << *p3 << std::endl;
    
	
	return 0;
}