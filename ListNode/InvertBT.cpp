#include<iostream>
#include<vector>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL or root->left==nullptr and root->right==nullptr){
            return root;
        }
        TreeNode* temp=root->left;
        
    
        root->left=root->right;
        root->right=temp;
        
        invertTree(root->left);
        invertTree(root->right);
        
        return root;
    }  
	
	void traversal(TreeNode *root, vector<int> &rec) {
        if (root) {
            rec.push_back(root->val);
            traversal(root->left, rec);
            traversal(root->right, rec);
        }
  }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> rec;
        traversal(root,rec);
        return rec;
    }
};

int main(){
	TreeNode *ans;
    TreeNode* Root = create_node(4);

	Root=MultiInput(Root,2,'L');
	
	Root=MultiInput(Root,7,'R');
	Root->left=MultiInput(Root->left,1,'L');
	Root->left=MultiInput(Root->left,3,'R');

    Root->right=MultiInput(Root->right,6,'L');
	Root->right=MultiInput(Root->right,9,'R');
	
	Solution mysol;
	ans=mysol.invertTree(Root);
	
	vector<int> res;
	res=mysol.preorderTraversal(ans);
	
	
	for(int &n:res){
		cout<<n<<',';
	}
	cout<<endl;
	cout<<ans->val;
	cout<<ans->left->val;
	cout<<ans->right->val;
	cout<<ans->left->left->val;
	cout<<ans->left->right->val;
	cout<<ans->right->left->val;
	cout<<ans->right->right->val<<endl;
	
	
	return 0;
}