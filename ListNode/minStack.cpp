#include<iostream>
#include<stack>
using namespace std;

class MinStack {
    stack<int> s;
    stack<int> minTrack;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        if(minTrack.empty() or val<=minTrack.top()){
            minTrack.push(val);
        }
        s.push(val);
    }
    
    void pop() {
        if(s.empty())return;
        if(s.top()==minTrack.top()){
            minTrack.pop();
        }
        s.pop();
    }
    
    int top() {
       return s.top();
    }
    
    int getMin() {
        return minTrack.top();
    }
};
int main(){
	MinStack minStack;
	minStack.push(-2);
	minStack.push(0);
	minStack.push(-3);
	cout<<minStack.getMin()<<endl; // return -3
	minStack.pop();
	cout<<minStack.top()<<endl;    // return 0
	cout<<minStack.getMin()<<endl; // return -2
	
	
	return 0;
}