#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
bool hasPathSum(TreeNode* root, int targetSum) {
	if(!root) return false;
    if(!root->left && !root->right && targetSum==root->val) return true;
    return(hasPathSum(root->left, targetSum-root->val)||hasPathSum(root->right, targetSum-root->val));
  }
};
int main(){
	
    TreeNode* Root = create_node(5);

	Root=MultiInput(Root,4,'L');
	
	Root=MultiInput(Root,8,'R');
    Root->left=MultiInput(Root->left,11,'L');
	Root->left->left=MultiInput(Root->left->left,7,'L');
	Root->left->left=MultiInput(Root->left->left,2,'R');
	
	Root->right=MultiInput(Root->right,13,'L');
	Root->right=MultiInput(Root->right,4,'R');
	Root->right->right=MultiInput(Root->right->right,1,'R');
	

	Solution mysol;
	int target;
	cout<<"target sum"<<endl;
	cin>>target;
	cout<<"Dose path sum exist"<<endl;
	if(mysol.hasPathSum(Root,target)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	return 0;
}