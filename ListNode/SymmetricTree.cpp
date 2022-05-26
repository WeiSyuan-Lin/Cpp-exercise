#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    bool cmpTreeNode(TreeNode *node1, TreeNode *node2) {
    if (!node1 && !node2)
      return true;
    if (!node1 || !node2)
      return false;
    if (!cmpTreeNode(node1->left, node2->right))
      return false;
    if (!cmpTreeNode(node1->right, node2->left))
      return false;
    return node1->val == node2->val;
  }
    bool isSymmetric(TreeNode* root) {
        return cmpTreeNode(root, root);
    }
};

int main(){
	
    TreeNode* Root = create_node(1);

	Root=MultiInput(Root,2,'L');
	Root->left=MultiInput(Root->left,3,'L');
    Root->left=MultiInput(Root->left,4,'R');

	Root=MultiInput(Root,2,'R');
    Root->right=MultiInput(Root->right,4,'L');
	Root->right=MultiInput(Root->right,3,'R');
	
	Solution mysol;
	if(mysol.cmpTreeNode(Root->left,Root->right)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	
	return 0;
}