#include<iostream>

using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        int i=1;
        int row=0;
        while(n-i>=0){
            n=n-i;
            row++;
            i++;
        }
        return row;
    }
};
int main(){
	
	int input;
	
	Solution mysol;
	cout<<"enter the number"<<endl;
	cin>>input;
	cout<<"the number of complete rows of the staircase is"<<endl;
    cout<<mysol.arrangeCoins(input)<<endl;
	
	
	system("pause");
	return 0;
}