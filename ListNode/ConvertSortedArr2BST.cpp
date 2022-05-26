#include<iostream>
#include<vector>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    TreeNode* getNode(vector<int>& nums,int start,int end){
        if(start > end) return NULL;
        int mid=start+(end-start)/2;
        TreeNode* root =new TreeNode(nums[mid]);
        root->left=getNode(nums,start,mid-1);
        root->right=getNode(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty() or nums.size()==0) return 0;
        return getNode(nums,0,nums.size()-1);   
    }
};

int main(){
	
    vector<int> nums={-10,-3,0,5,9};
	TreeNode *ans;
	Solution mysol;
	ans=mysol.sortedArrayToBST(nums);
	cout<<ans->val<<",";
	cout<<ans->left->val<<",";
	cout<<ans->right->val<<",";
	cout<<ans->left->right->val<<",";
	cout<<ans->right->right->val<<",";
	return 0;
}