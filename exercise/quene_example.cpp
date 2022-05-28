#include<iostream>
#include<queue>
using namespace std;

int main(){
	queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);
	cout << myQueue.size()<< endl; 
	cout << myQueue.front()<< endl;
	cout << myQueue.back()<< endl;
	myQueue.pop();
	cout << myQueue.front()<< endl;
	cout << myQueue.size() << endl; 
	cout << myQueue.empty() << endl; 
	return 0;
}