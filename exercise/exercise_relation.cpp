#include <iostream>
using namespace std;

int main(){
	
	// double a= 3.2;
	// char b= "b";
	bool a= true;
	bool b= false;
	
	if (a<b){
		std::cout<< "a<b"<<endl;
	}
	
	if (a > b) {
        std::cout << "a > b" << std::endl;
    }
    
    if (a >= b) {
        std::cout << "a >= b" << std::endl;
    }
    
    if (a == b) {
        std::cout << "a == b" << std::endl;
    }
    
    if (a != b) {
        std::cout << "a != b" << std::endl;
    }
	
	return 0;
}