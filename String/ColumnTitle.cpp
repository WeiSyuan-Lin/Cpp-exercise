#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber){
        string ans;
        while(columnNumber>0){
            columnNumber--;
            ans=ans+((char)(columnNumber%26+65));
            columnNumber=columnNumber/26;
        }
        string temp;
        temp=ans;
        for(int i=0;i<ans.size();i++){
            ans[ans.size()-1-i]=temp[i];
        }
        return ans;
    }
};
int main(){
	int input;
	string ans;

	Solution mysol;
	
    cout<<"please enter the columnNumber   "<<endl;
	cin>>input;
	
	cout<<"column title is"<<endl;
	ans=mysol.convertToTitle(input); 
	cout<<ans;
	
    cout<<endl;
	
	system("pause");
	return 0;
}