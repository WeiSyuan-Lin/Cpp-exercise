#include<iostream>
#include<cmath>

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return 0;
        if((log2((double)n)-(int)log2((double)n))==0){
            return 1;
        }
        else{
            return 0;
        }
    }
};
int main(){
	
	int input;
	
	Solution mysol;
	cout<<"enter the number"<<endl;
	cin>>input;
	cout<<"Is number  power of two"<<endl;
	if(mysol.isPowerOfTwo(input)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	
	system("pause");
	return 0;
}