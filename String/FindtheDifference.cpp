#include<iostream>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        int alph[26]={0};
        char ans;
        for(char &c: s) alph[c-'a']++;
        for(char &c: t){
            alph[c-'a']--;
            if(alph[c-'a']<0){
                ans=c;
                break;
            }
        } 
        return ans;
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
   	
	cout<<"Difference word "<<endl;
	
	cout<<mysol.findTheDifference(s,t)<<endl;
	
 
	system("pause");
	return 0;
}