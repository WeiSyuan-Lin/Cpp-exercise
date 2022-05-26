#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single=0;
        for(int i=0;i<nums.size();i++){
            single=single^nums[i];
        }
        return single;
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
	
	cout<<"the single number is"<<endl;
	cout<<mysol.singleNumber(nums)<<endl;
	
	system("pause");
	return 0;
}