#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end()){
                m[nums[i]]=nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(m.find(i)==m.end()){
                return i;
            }
        }
        return nums.size();
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
	
	cout<<"the Missing number is"<<endl;
	cout<<mysol.missingNumber(nums)<<endl;
	
	system("pause");
	return 0;
}