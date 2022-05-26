#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int s=0;
        vector<string> ans;
        for(int i=1;i<=nums.size();i++){
            if(i==nums.size() or nums[i]!=nums[i-1]+1){
                if(s==i-1){
                 ans.push_back(to_string(nums[s]));
                }
                else{
                ans.push_back(to_string(nums[s])+"->"+to_string(nums[i-1]));
                }
               s=i;
            }          
        }
        return ans;
    }
};
int main(){
	vector<int>nums;
	vector<string> ans;
	int input;
	Solution mysol;
	
    cout<<"please enter the numbers, if finished, enter -1  "<<endl;
	while(cin>>input and input!=-1){
	      nums.push_back(input);
	}
	
	
	cout<<"Summary Ranges"<<endl;
	 ans=mysol.summaryRanges(nums);
	for(int i=0;i<ans.size();i++){
		cout<<ans[i]<<',';
	}
	cout<<endl;
	system("pause");
	return 0;
}