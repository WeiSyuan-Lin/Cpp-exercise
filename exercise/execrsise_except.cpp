#include <iostream>
  
int main() {
    int i = -1; 
    
    try {
        if (i < 0) {
            throw "something wrong...";
        }
    }
    catch (const char* message) {
        std::cout << message << std::endl;
    }
	
	i=-3.1;
	try {
        if (i > 0) {
            throw 0;
        }
        throw 2.0;
    }
    catch (const int e) {
        std::cout << e << std::endl;
    }
    catch (...) {
        std::cout << "something wrong" << std::endl;
    }
    
    return 0;
}