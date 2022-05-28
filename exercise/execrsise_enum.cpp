#include <iostream>
  
int main() {
    enum Day {Sunday, Monday=10, Tuesday, Wednesday, Thursday, Friday, Saturday};
    
    std::cout << "Sunday: " << Sunday << std::endl;
    std::cout << "Monday: " << Monday << std::endl;
    std::cout << "Tuesday: " << Tuesday << std::endl;
    std::cout << "Wednesday: " << Wednesday << std::endl;
    std::cout << "Thursday: " << Thursday << std::endl;
    std::cout << "Friday: " << Friday << std::endl;
    std::cout << "Saturday: " << Saturday << std::endl;
    
    Day today = Wednesday;
    std::cout << today << std::endl;
    
    return 0;
}