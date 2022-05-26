#include<iostream>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0) return 1;
        int i=0;
        
        for(int j=0;j<t.size();j++){
            if(s[i]==t[j]){
                i++;
            }
        }
        if(i==s.size()) return 1;
        return 0;
    }
};
int main(){
	
	string s;
	string t;
	
	Solution mysol;
	
	cout<<"please enter the string 1"<<endl;
	cin>>s;
	
	cout<<"please enter the string 2"<<endl;
	cin>>t;
   	
	cout<<"Is Subsequence"<<endl;
	
	if(mysol.isSubsequence(s,t)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
 
	system("pause");
	return 0;
}