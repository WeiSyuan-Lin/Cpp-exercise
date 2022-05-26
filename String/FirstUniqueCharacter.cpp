#include<iostream>
#include<string>
#include<map>

using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<int,int>m;
        for(char &c:s){
            if(m.find(c-'a')==m.end()){
                m[c-'a']=1;
            }
            else{
                m[c-'a']+=1;
            }
        }
        for(int i=0;i<s.size();i++){
            if(m[s[i]-'a']==1) return i; 
        }
        return -1;
    }
};

int main(){
	
	string test;
	
	Solution mysol;
	
	cout<<"please enter the test"<<endl;
	cin>>test;
   	
	cout<<"First Unique Character in position "<<endl;
	
	cout<<mysol.firstUniqChar(test)<<endl;
	
 
	system("pause");
	return 0;
}