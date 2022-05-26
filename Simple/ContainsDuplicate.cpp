#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> check;
        for(int i=0;i<nums.size();i++){
            if(check.find(nums[i])==check.end()){
                check[nums[i]]=i;
            }
            else{
                return 1;
            }
        }
        return 0;
    }
};
int main(){
	vector<int>nums;
	int input;
	Solution mysol;
	
    cout<<"please enter the numbers, if finished, enter -1  "<<endl;
	while(cin>>input and input!=-1){
	      nums.push_back(input);
	}
	
	
	cout<<"Dose any value appear at least twice "<<endl;
	 
	if(mysol.containsDuplicate(nums)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	system("pause");
	return 0;
}