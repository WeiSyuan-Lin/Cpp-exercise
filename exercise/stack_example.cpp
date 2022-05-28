#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> myStack;
	myStack.push(1);
	myStack.push(2);
	myStack.push(3);
	cout << myStack.size() << endl; 
	cout << myStack.top() << endl;
	myStack.pop();
	cout << myStack.size() << endl; 
	cout << myStack.top() << endl; 
	return 0;
}