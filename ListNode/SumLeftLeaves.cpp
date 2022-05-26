#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:

int sumOfLeftLeavesHelper(TreeNode* root, bool is_left) {
	if (!root) {
		return 0;
	}
	if (!root->left && !root->right) {
		return is_left ? root->val : 0;
	}
	return sumOfLeftLeavesHelper(root->left, true) +
		   sumOfLeftLeavesHelper(root->right, false);
    }
int sumOfLeftLeaves(TreeNode* root) {
	return sumOfLeftLeavesHelper(root, false);
	}

};
int main(){
	
    TreeNode* Root = create_node(3);

	Root=MultiInput(Root,9,'L');
	
	Root=MultiInput(Root,20,'R');
    Root->right=MultiInput(Root->right,15,'L');
	Root->right=MultiInput(Root->right,7,'R');
	
		
	Solution mysol;
	int ans=mysol.sumOfLeftLeaves(Root);
	cout<<"Sum of left leaves is"<<endl;
	cout<<ans<<endl;
	
	return 0;
}