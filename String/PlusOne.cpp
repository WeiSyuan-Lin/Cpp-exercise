#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int N=digits.size();
        int i=0;
        int L=N-1-i;
        digits[L]=digits[L]+1;
        while(digits[L]>=10 and L!=0){
            digits[L]=0;
            i++;
            L=N-1-i;
            digits[L]=digits[L]+1;    
        }
        if(digits[0]>=10){
            digits[0]=0;
            digits.insert(digits.begin(),1);
            }
            
    return digits;    
    }      
};
int main(){
	vector<int> digits;
	vector<int> ans;
	int input;

	Solution mysol;
	
    cout<<"please enter the numbers, if finished enter -1  "<<endl;
	while(cin>>input and input!=-1){
	  digits.push_back(input);
	}
	
	
	cout<<"after plus one "<<endl;
	ans=mysol.plusOne(digits);
	cout<<"[";
	for(int i=0;i<ans.size();i++){
		cout<<ans[i];
	}
	cout<<"]";
	cout<<endl;
	
	system("pause");
	return 0;
}