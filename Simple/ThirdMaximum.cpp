#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        auto last = unique(nums.begin(),nums.end());
        nums.erase(last, nums.end());
        if(nums.size()<3) return nums.back();
        return nums[nums.size()-3];
        
    }
};
int main(){
	vector<int> nums1;//{0,1,2,4,5,6}
	
	
	int input;
	
	Solution mysol;
	cout<<"please enter the numbers for array1,  if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums1.push_back(input);
	}
	
	cout<<"Third maximum is"<<endl;
	cout<<mysol.thirdMax(nums1)<<endl;
		
	
	system("pause");
	return 0;
}