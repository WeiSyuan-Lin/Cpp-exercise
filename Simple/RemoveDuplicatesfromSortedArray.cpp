#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
        
    }
};

int main(){
	vector<int> nums;//{0,1,2,4,5,6}
	int input;
	
	vector<int> ans;
	Solution mysol;
	cout<<"please enter the elelment of number, if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums.push_back(input);
	}
	cout<<"the number of differernt element"<<endl;
	cout<<mysol.removeDuplicates(nums)<<endl;
	
	system("pause");
	return 0;
}