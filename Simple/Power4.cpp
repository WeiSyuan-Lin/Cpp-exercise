#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)return 1;
        while(n>4 and n%4==0){
            n=n/4;
        }
        if(n/4==1 and n%4==0){
            return 1;
        }
        return 0;
        
    }
};
int main(){
	
	int input;
	
	Solution mysol;
	cout<<"enter the number"<<endl;
	cin>>input;
	cout<<"Is number  power of four"<<endl;
	if(mysol.isPowerOfFour(input)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	
	system("pause");
	return 0;
}