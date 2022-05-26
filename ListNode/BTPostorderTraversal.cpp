#include<iostream>
#include<vector>
#include<stack>
#include"TreeNode.h"
using namespace std;

/**
 * Definition for singly-linked list.
 */


class Solution {
public:
    void traversal(TreeNode *root, vector<int> &rec) {
        if (root) {
            traversal(root->left, rec);
            traversal(root->right, rec);
            rec.push_back(root->val);
        }
  }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> rec;
        traversal(root,rec);
        return rec;
    }
};
int main(){
	TreeNode* Root=create_node(1);
	TreeNode* nodel=create_node(2);
	TreeNode* node2=create_node(3);
	
	insert_node(Root, nodel, 'R');
	insert_node(nodel, node2, 'L');
	
	Solution mysol;
	vector<int> ans;
	ans=mysol.postorderTraversal(Root);
	for(int &n:ans){
		cout<<n<<',';
	}
	
	return 0;
}