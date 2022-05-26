#include<iostream>
#include<climits>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int letters[128] = {0};
 
        for(char c : s){
            letters[c]++;
        }
 
        int ans = 0;
        for(int i = 0 ; i < 128;++i){
            int curLen = letters[i];
            if(letters[i] % 2 == 1){
                curLen--;
            }
 
            ans += curLen;
            if(ans % 2 == 0 && letters[i] % 2 == 1){
                ans++;
            }
        }
 
        return ans;
    }
};

int main(){
	
	string test ;
	
	Solution mysol;
	
	cout<<"please enter the string"<<endl;
	cin>>test;
	
	
	cout<<"length of the longest palindrome "<<endl;
	cout<<mysol.longestPalindrome(test)<<endl;
 
	system("pause");
	return 0;
}