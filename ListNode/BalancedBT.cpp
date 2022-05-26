#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    bool flag=true;
    int depth(TreeNode* root){
        if (root==nullptr or !flag) return 0;
        int dl=depth(root->left);
        int dr=depth(root->right);
        if(abs(dl-dr)>1){
            flag=false;
            return 0;
        }
        return max(dl,dr)+1;
    }
      
    bool isBalanced(TreeNode* root) {
        depth(root);
        return flag;
        
    }
};
int main(){
	
    TreeNode* Root = create_node(3);

	Root=MultiInput(Root,9,'L');
	
	Root=MultiInput(Root,20,'R');
    Root->right=MultiInput(Root->right,15,'L');
	Root->right=MultiInput(Root->right,7,'R');
	
	Solution mysol;
	if(mysol.isBalanced(Root)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	
	return 0;
}