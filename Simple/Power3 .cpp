#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)return 1;
        while(n>3 and n%3==0){
            n=n/3;
        }
        if(n/3==1 and n%3==0){
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
	cout<<"Is number  power of three"<<endl;
	if(mysol.isPowerOfThree(input)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	
	system("pause");
	return 0;
}