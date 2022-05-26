#include<iostream>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    int find(TreeNode* node){
        if(node==nullptr) return 0;
        int deepL=1;
        int deepR=1;
        if(node->left!=nullptr){
            deepL+=find(node->left);
        }
        if(node->right!=nullptr){
            deepR+=find(node->right);
        }
        return max(deepR,deepL);
    }
    
    int maxDepth(TreeNode* root) {
        return find(root);      
    }
};

int main(){
	
    TreeNode* Root = create_node(3);

	Root=MultiInput(Root,9,'L');
	

	Root=MultiInput(Root,20,'R');
    Root->right=MultiInput(Root->right,15,'L');
	Root->right=MultiInput(Root->right,7,'R');
	
	Solution mysol;
	cout<<"maximum depth is "<<endl;
	cout<<mysol.maxDepth(Root)<<endl;
	return 0;
}