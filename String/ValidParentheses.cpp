#include<iostream>
#include<string>
#include<stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char>istrue;
        for(int i=0;i<s.length();i++){
            switch(s[i]){
                case '(':{istrue.push('(');break;}
                case '[':{istrue.push('[');break;}
                case '{':{istrue.push('{');break;}
                case ')':{
                    if(istrue.size()==0||istrue.top()!='(')
                        return false;
                    istrue.pop();
                    break;
                }
                case ']':{
                    if(istrue.size()==0||istrue.top()!='[')
                        return false;
                    istrue.pop();
                    break;
                }
                case '}':{
                    if(istrue.size()==0||istrue.top()!='{')
                        return false;
                    istrue.pop();
                    break;
                }
            }
        }
        if(istrue.size()!=0)
            return false;
        return true;
    }
};
int main(){
	string input;

	Solution mysol;
	
    cout<<"please enter the brackets "<<endl;
	cin>>input;
	
	cout<<"Is the input string valid"<<endl;
    if(mysol.isValid(input)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	system("pause");
	return 0;
}