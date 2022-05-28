#include <iostream>

using namespace std;  
 
int main() {
    int i = 1;
    int j = 1;
    
    while (i <= 9) {
        while (j <= 9) {
            std::cout << i * j << " ";
            j++;
        }
        
        j = 1;
        i++;
        std::cout << std::endl;
    }
	std::cout << std::endl;
	std::cout << std::endl;
	i = 1;
    j = 1;
	do {
        do {
            std::cout << i * j << " ";
            j++;
        } while (j <= 9);
        
        j = 1;
        i++;
        std::cout << std::endl;
    } while (i <= 9);
    
    return 0;
}