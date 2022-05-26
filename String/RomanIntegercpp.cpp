#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
		switch(s[i]){
			case 'I' :
			if(s[i+1]=='V'){
				cnt+=4;
				i++;
			}
			else if(s[i+1]=='X'){
				cnt+=9;
				i++;
			}
			else{
				cnt+=1;
			}
			break;
			
			case 'V':
			cnt+=5;
			break;
			
			case 'X':
			if(s[i+1]=='L'){
				cnt+=40;
				i++;
			}
			else if(s[i+1]=='C'){
				cnt+=90;
				i++;
			}
			else{
				cnt+=10;
			}
			break;
			
			case 'L':
			cnt+=50;
			break;
			
			case 'C':
			if(s[i+1]=='D'){
				cnt+=400;
				i++;
			}
			else if(s[i+1]=='M'){
				cnt+=900;
				i++;
			}
			else{
				cnt+=100;
			}
			break;
			
			case 'D':
			cnt+=500;
			break;
			
			case 'M':
			cnt+=1000;
			break;
			   
		}
	}
	return cnt;
        
    }
};

int main(){
	string input;
	Solution mysol;
	cout<<"please enter the Roman number"<<endl;
	cin>>input;
	cout<<mysol.romanToInt(input)<<endl;
	system("pause");
	return 0;
}