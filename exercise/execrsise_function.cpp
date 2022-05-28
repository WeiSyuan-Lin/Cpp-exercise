#include <iostream>
#include <cstdarg>

using namespace std;

void do_something(){
	std::cout<<"hello world"<<endl;
}

double power (double x,int n){
	double temp;
	temp=x;
	if (n>0){
		for (int i=1; i<n;i++){
		x=x*temp;
		}
	}
	else{
		for (int i=1; i<abs(n)+2;i++){
		x=x/temp;
		}
	}
	
	return x;
}

// void do_something_word(char*);

void do_something_word(char* s="hi") {
    std::cout << s << std::endl;
}

int do_something2(int &n1_ref, int &n2_ref) {
    n1_ref *= 2;
    n2_ref *= 2;
    
    return n1_ref + n2_ref;
}

int do_something3(int* n1_ptr, int* n2_ptr) {
    *n1_ptr *= 2;
    *n2_ptr *= 2;
    return *n1_ptr + *n2_ptr;
}


int sum(int n_args, ...) {
	
    va_list ap;
    va_start(ap, n_args);
    int sum = va_arg(ap, int);
    for (int i = 2; i <= n_args; i++) {
        sum += va_arg(ap, int);
    }
    va_end(ap);
    
    return sum;
}

inline int min(int a, int b) {
    return a < b ? a : b;
}


void do_sum(int n1, int n2, int n3) {
    std::cout << n1 + n2 + n3 << std::endl;
}

void do_sum(double n1, double n2, double n3) {
    std::cout << n1 + n2 + n3 << std::endl;
}

void do_sum(int n1) {
    std::cout << n1 << std::endl;
}

int main(){
	
	do_sum(10);
    do_sum(0.2, 4.5, 6.1);
    do_sum(3, 4, 5);
	
	
	// double result;
	// do_something_word("Ahoy");
	
	// int a = 22;
    // int b = 33;
    // std::cout << "a + b: " << do_something2(a, b) << std::endl;
    // std::cout << "a: " << a << std::endl;
    // std::cout << "b: " << b << std::endl;
	
	// std::cout <<std::endl;
	
	// a = 22;
    // b = 33;
    // std::cout << "a + b: " << do_something3(&a, &b) << std::endl;
    // std::cout << "a: " << a << std::endl;
    // std::cout << "b: " << b << std::endl;
    
	// std::cout << sum(2, 11, 22) << std::endl;
    // std::cout << sum(4, 12,11,19, 20) << std::endl;
    // std::cout << sum(2, 3, 65) << std::endl;
	
	// auto f = [](int i) {return i * i;};
    
    // std::cout << f(11) << std::endl;
    // std::cout << f(22) << std::endl;
    // std::cout << f(16) << std::endl;
	
	// std::cout << min(55, 22) << std::endl;
    // std::cout << min(2, 214) << std::endl;
    
	
	// do_something();
	
	// for (int i = -6; i < 7; i++) {
        // std::cout << power(5.0, i) << std::endl;
    // }
	
	// result=power(0.1,-2);
	// std::cout<<result<<endl;
	return 0;
}

