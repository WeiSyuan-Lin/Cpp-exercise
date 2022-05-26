#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int j;
       for(int i=0;i<nums.size()-1;i++){
           
           if(nums[i]==0){
               j=i;
               while(nums[j]==0 and j<nums.size()-1){
                   j++;
               }
               nums[i]=nums[j];
               nums[j]=0;
           }
       } 
    }
};

int main(){
	vector<int> nums;//{0,1,2,4,5,6}
	int input;
	
	Solution mysol;
	cout<<"please enter the numbers, if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums.push_back(input);
	}
	
	mysol.moveZeroes(nums);
	for(int &n:nums){
		cout<<n;
	}
	
	cout<<endl;

	system("pause");
	return 0;
}