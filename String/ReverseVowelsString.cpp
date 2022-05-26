#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
string reverseVowels(string s) {
   int i = 0, j= s.size() - 1;
        while (i < j) {
            if (isVowels(s[i]) && isVowels(s[j])) {
                swap(s[i], s[j]);
                i++;
                j--;
            } else if (isVowels(s[i])) {
                j--;
            } else {
                i++;
            }
        }
        return s;
    }
    bool isVowels(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};

int main(){
	
	string test;
	
	Solution mysol;
	
	cout<<"please enter the test"<<endl;
	cin>>test;
   	
	cout<<"Reverse Vowels of a String is "<<endl;
	
	test=mysol.reverseVowels(test);
	cout<<test<<endl;
	
 
	system("pause");
	return 0;
}