#include<iostream>
using namespace std;

int main(){
    int a=1;
	double b=1.7;
	
	std::cout<<a++<<endl;
	std::cout<<++a<<endl;
	std::cout<<a++<<endl;
	std::cout<<a<<endl;
	
    std::cout<<b--<<endl;
	std::cout<<--b<<endl;
	std::cout<<b--<<endl;
	std::cout<<b<<endl;	
	
	char var = 'a';
    
    while (var <= 'z') {
        std::cout << var++;
    }
    std::cout << std::endl;
    
    var -= 1;
    while (var >= 'a') {
        std::cout << var--;
    }
    std::cout << std::endl;
	
	return 0;
	
}