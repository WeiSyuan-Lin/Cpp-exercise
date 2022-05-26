#include<iostream>
#include<string>

using namespace std;
 // something wrong

class Solution {
public:
    int countSegments(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') continue;
            res++;
            while (i < s.size() and s[i] != ' ') i++;
        }
        return res;
    }
};
int main(){
	
	string test;
	
	Solution mysol;
	
	cout<<"please enter the string"<<endl;
	cin>>test;
	
	
	cout<<" Number of Segments "<<endl;
	cout<<mysol.countSegments(test)<<endl;
 
	system("pause");
	return 0;
}