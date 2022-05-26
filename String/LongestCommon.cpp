#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        if (strs.size() == 1) return strs[0];
        
        // Init
        string ans = "";
        int min_len = 200;
        
        for (string str: strs) {
            if (str.size() < min_len) {
                min_len = str.size();
            }
        }
                
        // Comparison
        for (int i=0; i<min_len; i++) {
            for (int si=0; si<strs.size()-1; si++) {
                if (strs[si][i] != strs[si+1][i]) {
                    return ans;
                }                
            }
        ans += strs[0][i];
        }
        
        
        return ans;
    }
};
int main(){
	string input;
	string ans;
	vector<string> s;
	Solution mysol;
    cout<<"please enter the words, if finished, enter -1"<<endl;
	while(cin>>input and input!="-1"){
		s.push_back(input);
	}

	cout<<mysol.longestCommonPrefix(s)<<endl;
	system("pause");
	return 0;
}