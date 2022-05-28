#include <iostream>
  
int main() {
    int a[5];
    a[0] = 1;
    a[1] = 2;
    a[2] = 3;
    a[3] = 4;
    a[4] = 5;
    
    std::cout << "a[0]: " << a[0] << std::endl;
    std::cout << "a[1]: " << a[1] << std::endl;
    std::cout << "a[2]: " << a[2] << std::endl;
    std::cout << "a[3]: " << a[3] << std::endl;
    std::cout << "a[4]: " << a[4] << std::endl;
    
	std::cout << std::endl;
    
	
	int aa[] = {1, 2, 3, 4, 5};
	for (int i=0;i<5;i++){
		std::cout << "aa["<<i << "] :"<<aa[i] << std::endl;
	}
	
	int c[2][3] = {{1, 1, 5}, {4, 5, 6}};
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << c[i][j] << std::endl;
        }
    }
	_sleep(5*1000);
    return 0;
}