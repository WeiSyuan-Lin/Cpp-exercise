#include<iostream>

using namespace std;


class Solution {
public:
    int mySqrt(int x) {
        if(x<=1) return x;
        int left=0;
        int right=x;
        
       while (left < right) {
            int mid = left + (right - left) / 2;
            if (x/mid >= mid) left = mid + 1;
            else right = mid;
        }
        return right - 1;
    }
};

int main(){
	
	int input;
	
	Solution mysol;
	
	cout<<"enter the number"<<endl;
	cin>>input;
	
	cout<<"the nearesrt root of input number is"<<endl;
	cout<<mysol.mySqrt(input)<<endl;
	
	system("pause");
	return 0;
}