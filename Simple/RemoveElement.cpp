#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) return 0;
        int N=nums.size();
        int j=0;
        for(int i=0;i<N;i++){
            if(nums[i]!=val){     
                nums[j]=nums[i];
                j++;
            }
        }
    return j;
    }
    
};

int main(){
	vector<int> nums;//{0,1,2,4,5,6}
	int input;
	int target;
	
	vector<int> ans;
	Solution mysol;
	cout<<"please enter the elelment of number, if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums.push_back(input);
	}
	cout<<"enter the target"<<endl;
	cin>>target;
	
	cout<<"the number of differernt element"<<endl;
	cout<<mysol.removeElement(nums,target)<<endl;
	
	system("pause");
	return 0;
}