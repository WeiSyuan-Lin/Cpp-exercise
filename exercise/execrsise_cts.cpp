#include <iostream>
  
int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (i == 5) {
			std::cout << "hi" << std::endl;
            continue;
			
        }
        
        std::cout << i << std::endl;
    }
	
	std::cout << std::endl;
	
	for (i = 0; i < 10; i++) {
        if (i == 5) {
			std::cout << "hi" << std::endl;
            break;
			
        }
        
        std::cout << i << std::endl;
    }
	
	
	i = 1;
    if (i < 10) {
        goto label_one;
    }
    
    label_one:
    {
        std::cout << "Label One" << std::endl;
        goto label_three;
    }
    
    label_two:
    {
        std::cout << "Label Two" << std::endl;
    }
    
    label_three:
    {
        std::cout << "Label Three" << std::endl;
        i++;
        if (i < 10) {
            goto label_two;
        }
    }
    
    return 0;
}
