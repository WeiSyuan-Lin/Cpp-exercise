#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sumTemp= nums[0];
        int sumMax= nums[0];
        if(nums.size()==1) return nums[0];
        for(int i=1;i<nums.size();i++){
            sumTemp=max(sumTemp+nums[i],nums[i]);
            sumMax=max(sumMax,sumTemp);
        }
        return sumMax;
   }
};
int main(){
	vector<int> nums;
    int input;
	
	Solution mysol;
	
    cout<<"please enter the numbers, if finished enter -0  "<<endl;
	while(cin>>input and input!=-0){
		nums.push_back(input);
	}
	
	cout<<"the largest sum is   "<<endl;
	
    cout<<mysol.maxSubArray(nums)<<endl;
	
	system("pause");
	return 0;
}