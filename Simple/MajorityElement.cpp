#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=nums[0];
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(res==nums[i]){
                cnt++;
            }
            else if(cnt>0){
                cnt--;
            }
            else{
                res=nums[i];
                cnt=1;
            }
        }
        return res;
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
	
	cout<<"the Majority  number is"<<endl;
	cout<<mysol.majorityElement(nums)<<endl;
	
	system("pause");
	return 0;
}