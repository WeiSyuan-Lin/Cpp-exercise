#include <iostream>
using namespace std;

int main(){
	int a = 55;
    int b = 34;
    
    if (a > b) {
        std::cout << "Good luck!" << std::endl;
    }
    
    if (a != b) {
        std::cout << "Have a nice day!" << std::endl; 
    }
	
	int i;
    
    for (i = -1; i <= 10; i++) {
        std::cout << i << std::endl;
    }
	
	char aa = 'c';
    char bb = 'c';
    
    if (aa == bb) {
        std::cout << "Welcome to my world!" << std::endl; 
    }
    
    else{
        std::cout << "Free your mind." << std::endl; 
    }
	if (aa=='a'){
		std::cout<<"Yes"<<endl;
	}
	else{
		if(aa==bb){
			std::cout<<"No"<<endl;
		}
		else{
			std::cout<<"what"<<endl;
		}
	}
	return 0;
} 