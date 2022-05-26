#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=(int)(columnTitle[0]-64);
        for(int i=1;i<columnTitle.size();i++){
            ans=ans*26+(int)(columnTitle[i]-64);
        }
        return ans;
    }
};
int main(){
	string input;

	Solution mysol;
	
    cout<<"please enter the columnTitle    "<<endl;
	cin>>input;
	
	cout<<"column number is"<<endl;
	 
	cout<<mysol.titleToNumber(input);
	
    cout<<endl;
	
	system("pause");
	return 0;
}