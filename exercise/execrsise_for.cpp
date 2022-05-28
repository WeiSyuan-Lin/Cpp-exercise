#include <iostream>

using namespace std;

int main(){
	int sum=0;
	int i;
	
	for (i=1; i<=100; i++){
		sum+=i;
	}
	std::cout<< "total sum is "<<sum<<endl;
	
	int k, j;
    
    for (k = 1; k <= 9; k++) {
        for (j = 1; j <= 9; j++) {
            std::cout << k * j << " ";
        }
        
        std::cout << std::endl;
    }
	
	int array[] = {1, 2, 3, 4, 5};
    
    for (int ii: array) {
        std::cout << ii << std::endl;
    }
	
	return 0;
}