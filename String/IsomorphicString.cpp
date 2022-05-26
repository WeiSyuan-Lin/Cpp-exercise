#include<iostream>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t){
        int len = s.length();
        map<char, char> m;
        map<char, char> m2;
        for (size_t i = 0; i < len; i++) {
            if (m.find(s[i]) == m.end()) {
                m[s[i]] = t[i];
            }else if (m[s[i]] != t[i]) {
                return false;
            }
            if (m2.find(t[i]) == m2.end()) {
                m2[t[i]] = s[i];
            }else if (m2[t[i]] != s[i]) {
                return false;
            }
        }
        return true;      
    }
};
int main(){
	string s;
	string t;

	Solution mysol;
	
    cout<<"please enter the string 1    "<<endl;
	cin>>s;
	
	cout<<"please enter the string 2    "<<endl;
	cin>>t;
	
	cout<<"Are strings isomorphic "<<endl;
	 
	if(mysol.isIsomorphic(s,t)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	system("pause");
	return 0;
}