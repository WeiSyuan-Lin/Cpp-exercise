#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int alph[26]={0};
        for(char &c: magazine) alph[c-'a']++;
        for(char &c: ransomNote){
            alph[c-'a']--;
            if(alph[c-'a']<0)return 0;
        } 
        return 1;
    }
};
int main(){
	string ransomNote ;
	string magazine ;

	Solution mysol;
	
	cout<<"please enter the ransomNote "<<endl;
	cin>>ransomNote ;


    cout<<"please enter the magazine "<<endl;
	cin>>magazine ;
	
	cout<<"Can ransomNote  be constructed from magazine"<<endl;
	 
	if(mysol.canConstruct(ransomNote,magazine)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	system("pause");
	return 0;
}