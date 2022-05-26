#include<iostream>
#include<map>
#include<string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> m1;
        map<char,int> m2;
        for(int i=0;i<s.size();i++){
            if(m1.find(s[i])==m1.end()){
                int cnt=1;
                m1[s[i]]=cnt;
            }
            else{
                m1[s[i]]=m1[s[i]]+1;
            }
        }
        for(int i=0;i<t.size();i++){
            if(m2.find(t[i])==m2.end()){
                int cnt=1;
                m2[t[i]]=cnt;
            }
            else{
                m2[t[i]]=m2[t[i]]+1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[s[i]])
                return 0;
        }
        for(int i=0;i<t.size();i++){
            if(m1[t[i]]!=m2[t[i]])
                return 0;
        }
        return 1;
        
        
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
	
	cout<<"is anagram anagram "<<endl;
	if(mysol.isAnagram(s,t)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	system("pause");
	return 0;
}