#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if((p->val-root->val)*(q->val-root->val)<=0) return root;
        if(p->val>root->val){
            return lowestCommonAncestor(root->right, p, q);
        }
        else{
            return lowestCommonAncestor(root->left, p, q);
        }
    }
};
int main(){
	
    TreeNode* Root = create_node(6);

	Root=MultiInput(Root,2,'L');
	
	Root=MultiInput(Root,8,'R');
    Root->right=MultiInput(Root->right,7,'L');
	Root->right=MultiInput(Root->right,9,'R');
	
	Root->left=MultiInput(Root->left,0,'L');
	Root->left=MultiInput(Root->left,4,'R');
	Root->left->left=MultiInput(Root->left->left,3,'L');
	Root->left->left=MultiInput(Root->left->left,5,'R');
	
	Solution mysol;
	TreeNode* ans=mysol.lowestCommonAncestor(Root,Root->left,Root->left->right);
	cout<<ans->val<<endl;
	
	return 0;
}