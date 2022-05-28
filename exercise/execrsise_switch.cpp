#include <iostream>

using namespace std;

int main(){
	int data[] = {1, 0 ,0, 1, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 1};
    int one_count = 0;
    int zero_count = 0;
    int i;
	
	for (i=0; i<=15;i++){
		switch(data[i]){
			case 0:
			    zero_count++;
    			break;
			case 1:
			     one_count++;
				 break;
		}
	}
	
	std::cout << "There are " << zero_count;
    std::cout << " 0s, and " << one_count;
    std::cout << " 1s in data." << std::endl;
	
	char saying[] = {'N', 'e', 'v', 'e', 'r', ' ', 'p', 'u', 
                     't', ' ', 'o', 'f', 'f', ' ', 't', 'i',
                     ' ', 'd', 'o', ' ', 't', 'o', 'd', 'a', 
                     'y', '.'};
    
    int aV, eV, iV, oV, uV, other, j;
    aV = eV = iV = oV = uV = 0;
    other = j = 0;
    
    while (saying[j] != '\0') {
        switch(saying[j]) {
            case 'A': case 'a':
                aV++;
                break;
                
            case 'E': case 'e':
                eV++;
                break;
                
            case 'I': case 'i':
                iV++;
                break;
            
            case 'O': case 'o':
                oV++;
                break;
            
            case 'U': case 'u':
                uV++;
                break;
            
            default:
                other++;
                break;
        }
        
        j++;
    }
    
    std::cout << "a: " << aV;
    std::cout << std::endl;
    std::cout << "e: " << eV;
    std::cout << std::endl;
    std::cout << "i: " << iV;
    std::cout << std::endl;
    std::cout << "o: " << oV;
    std::cout << std::endl;
    std::cout << "u: " << uV;
    std::cout << std::endl;
    std::cout << "other: " << other;
    std::cout << std::endl;
	
	return 0;
}