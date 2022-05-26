#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int dl=minDepth(root->left);
        int dr=minDepth(root->right);
        if(dl==0 or dr==0){
            return dl+dr+1;
        }
        else{
             return min(dl,dr)+1;
        }
    }
};
int main(){
	
    TreeNode* Root = create_node(3);

	//Root=MultiInput(Root,9,'L');
	
	Root=MultiInput(Root,20,'R');
    //Root->right=MultiInput(Root->right,15,'L');
	Root->right=MultiInput(Root->right,7,'R');
	Root->right->right=MultiInput(Root->right->right,7,'R');
	
	Solution mysol;
	cout<<"minimum depth is"<<endl;
	cout<<mysol.minDepth(Root)<<endl;
	
	
	return 0;
}