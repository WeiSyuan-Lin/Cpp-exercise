#include <iostream>

using namespace std;

template <typename T> class Demo {
public:
    Demo(const T& a, const T& b) {
        this->a = a;
        this->b = b;
    }
    
    T do_something() {
        return a + b;
    }
    
private:
    T a;
    T b;
};

template <typename T> using D = Demo<T>;

int main() {
    D<int> d1(20, 25);
    cout << d1.do_something() << endl;
    D<double> d2(5.2, 3.95);
    cout << d2.do_something() << endl;
    D<char> d3('1', '2');
    cout << d3.do_something() << endl;
    
    return 0;
}
