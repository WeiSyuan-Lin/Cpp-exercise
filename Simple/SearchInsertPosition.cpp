#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int j=nums.size()-1;
        int i=0;
        int index;
        while(i<=j){
            index=(i+j)/2;
            if(nums[index]==target){
                return index;
            }
            else if(nums[index]>=target){
                j=index-1;
            }
            else{
                i=index+1;
            }
            
        }       
        return i;
    }
        
};
int main(){
	vector<int> nums;
    int input;
	int target;
	Solution mysol;
	
    cout<<"please enter the numbers, if finished enter -1  "<<endl;
	while(cin>>input and input!=-1){
		nums.push_back(input);
	}
	cout<<"enter the target"<<endl;
	cin>>target;
	cout<<"the position is   "<<endl;
	
    cout<<mysol.searchInsert(nums,target)<<endl;
	
	system("pause");
	return 0;
}