#include <iostream>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        else{
            int ans[10];
            int x_temp=x;
            int i=0;
            while (x_temp)
            {
                ans[i]=x_temp%10;
                i+=1;
                x_temp=x_temp/10;
            }
            int N=i;
            for (int i=0; i<N;i++){
                if (ans[i]!=ans[N-1-i]){
                    return false;
                }
            }
            return true;
          }       
    }
};

int main(){
	
	int input;
	
	Solution mysol;
	cout<<"please enter the number"<<endl;
    cin>>input;
	
	cout<<mysol.isPalindrome(input)<<endl;
	system("pause");
	return 0;
}