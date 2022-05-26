#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        map<int,int>Same;
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            if(Same.find(nums1[i])==Same.end()){
                Same[nums1[i]]=nums1[i];
            }
        }
        for(int j=0;j<nums2.size();j++){
            if(Same.find(nums2[j])!=Same.end()){
                ans.push_back(nums2[j]);
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};

int main(){
	vector<int> nums1;//{0,1,2,4,5,6}
	vector<int> nums2;
	vector<int> Ans;
	int input;
	
	Solution mysol;
	cout<<"please enter the numbers for array1,  if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums1.push_back(input);
	}
	
	cout<<"please enter the numbers for array2,  if you finished, enter -1"<<endl;

	while(cin>>input && input!=-1){
		nums2.push_back(input);
	}
	
	Ans=mysol.intersection(nums1,nums2);
	cout<<"[";
	for(int &n:Ans){
		cout<<n<<",";
		
	}
	cout<<"]";
	cout<<endl;

	system("pause");
	return 0;
}