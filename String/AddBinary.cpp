#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string s = "";      
        int c = 0, i = a.size() - 1, j = b.size() - 1;
        while(i >= 0 || j >= 0 || c == 1)
        {
            c += i >= 0 ? a[i --] - '0' : 0;
            c += j >= 0 ? b[j --] - '0' : 0;
            s = char(c % 2 + '0') + s;
            c /= 2;
        }
        return s;      
    }
};
int main(){
	string a ;
	string b  ;

	Solution mysol;
	
    cout<<"please enter the a  "<<endl;
	cin>>a ;
	
	cout<<"please enter the b   "<<endl;
	cin>>b  ;
	
	cout<<"sum as a binary string "<<endl;
    cout<<mysol.addBinary(a,b)<<endl;
	
	system("pause");
	return 0;
}