#include<iostream>
#include<queue>

using namespace std;

class MyStack {
private:
    queue<int> q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        if(q.empty()){
            q.push(x);
            }
        else{
        int N=q.size();
        q.push(x);
        for(int i=0;i<N;i++){
            q.push(q.front());
            q.pop();
            
        }
                    
        }
    }
    
    int pop() {
        int temp=q.front();
        q.pop();
        return temp;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

int main(){
	MyStack myStack;
	myStack.push(1);
	myStack.push(2);
	cout<<myStack.top()<<endl; // return 2
	cout<<myStack.pop()<<endl; // return 2
	cout<<myStack.empty(); // return False
	
	return 0;
}