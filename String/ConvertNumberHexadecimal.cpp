#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

class Solution {
public:
    string toHex(int num) {
        string res = "";
        vector<string> v{"a","b","c","d","e","f"};
        int n = 7;
        unsigned int x = num;
        if (num < 0) x = UINT_MAX + num + 1;
        while (x > 0) {
            int t = pow(16, n);
            int d = x / t;
            if (d >= 10) res += v[d - 10];
            else if (d >= 0) res += to_string(d);
            x %= t;
            --n;
        }
        while (n-- >= 0) res += to_string(0);
        while (!res.empty() && res[0] == '0') res.erase(res.begin());
        return res.empty() ? "0" : res;
        
    }
};

int main(){
	
	string ans;
	int num;
	
	Solution mysol;
	
	cout<<"please enter the number"<<endl;
	cin>>num;
	
	
	cout<<"Convert to Hexadecimal"<<endl;
	ans=mysol.toHex(num);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i];
	}
	cout<<endl;
 
	system("pause");
	return 0;
}