#include<iostream>
#include<stack>

using namespace std;

class MyQueue {
private:
    stack<int>s1;
    stack<int>s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        if(s2.empty()){
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        }
       int temp=s2.top();
       s2.pop();
       return temp;
    }
    
    int peek() {
        if(s2.empty()){
            while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
            }
        }   
        return s2.top();
    }
    bool empty() {
        return s1.empty() and s2.empty() ;
    }
};


int main(){
	MyQueue myQueue;
	myQueue.push(1); // queue is: [1]
	myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
	cout<<myQueue.peek()<<endl; // return 1
	cout<<myQueue.pop()<<endl; // return 1, queue is [2]
	cout<<myQueue.empty(); // return false	
	return 0;
}