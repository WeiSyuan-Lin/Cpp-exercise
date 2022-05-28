#include <iostream>


/* 當資料成員被宣告為 private 或 protected 的時候，
他們就只能透過類別中的成員函數存取，
如果要讓類別以外的地方設定或使用 private 或 protected 的資料成員，
就得透過 public 的成員函數。
像這樣取得 private 或 protected 資料成員的函數叫做存取函數 (accessor) ，
也是一般俗稱的 getter ，而設定 private 或 protected 資料成員的函數叫做修改函數 (mutator) ，
也是一般俗稱的 setter 
*/

class Demo {
public:
    Demo(int pa, int pb) {
        set_a(pa);
        set_b(pb);
    }
    
    int get_a() {
        return a;
    }
    
    int get_b() {
        return b;
    }
    
    void set_a(int pa) {
        a = pa;
    }
    
    void set_b(int pb) {
        b = pb;
    }
    
private:
    int a;
    int b;
};

int main() {
    Demo d(12, 10);
    std::cout << d.get_a() + d.get_b() << std::endl;
	
	d.set_a(-1);
	std::cout << d.get_a() + d.get_b() << std::endl;
    
    return 0;
}