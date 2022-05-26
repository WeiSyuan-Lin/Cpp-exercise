#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        for(int i=1;i<=n;i++){
            string temp=" ";
            if(i%15==0){
              temp="FizzBuzz";  
            }
            else if(i%3==0){
                temp="Fizz";
            }
            
            else if(i%5==0){
              temp="Buzz";  
            }
            
            else{
                temp=to_string(i);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main(){
	
	vector<string> ans;
	int num;
	
	Solution mysol;
	
	cout<<"please enter the number"<<endl;
	cin>>num;
	
	
	cout<<"Fizz Buzz : "<<endl;
	ans=mysol.fizzBuzz(num);
	cout<<"[";
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<',';
	}
	cout<<"]";
	cout<<endl;
 
	system("pause");
	return 0;
}