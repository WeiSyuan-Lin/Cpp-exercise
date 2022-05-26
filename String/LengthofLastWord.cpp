#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int L=s.size()-1;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[L-i]!=' '){
                cnt++;
            }
            if(s[L-i]==' ' and cnt>0){
                break;
            }
        }
    
        return cnt;
    }
};
int main(){
	string s ;

	Solution mysol;
	
    cout<<"please enter the string  "<<endl;
	cin>>s;
	
	
	cout<<"length of the last is "<<endl;
    cout<<mysol.lengthOfLastWord(s)<<endl;
	
	system("pause");
	return 0;
}