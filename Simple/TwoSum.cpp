#include<iostream>
#include<vector>
#include<map>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mymap;
        vector<int> ans;
        for(int i=0; i < nums.size(); i++){
            if(mymap.find(nums[i]) != mymap.end()){ // found
                ans.push_back(mymap[nums[i]]);
                ans.push_back(i);
                return ans;
            }
            else{
                mymap[target - nums[i]] = i;
            }
        }
        return ans;      
    }
          
};


int main(){
	vector<int> nums;//{0,1,2,4,5,6}
	int input;
	int target=5;
	vector<int> ans;
	Solution mysol;
	cout<<"please enter the elelment of number, if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums.push_back(input);
	}
	cout<<"enter the target"<<endl;
	cin>>target;
	
	ans=mysol.twoSum(nums,target);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<endl;
	}
	system("pause");
	return 0;
}