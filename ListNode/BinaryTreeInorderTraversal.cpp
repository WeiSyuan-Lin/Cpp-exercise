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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
    stack<TreeNode*> st;
    TreeNode *cur;
    
    while (root || !st.empty()) {
      while (root) {           // 走訪左子樹
        st.push(root);         // 紀錄父節點
        root = root->left;
      }
      cur = st.top();          // 回到父節點
      st.pop();
      res.push_back(cur->val); // 走訪父節點
      root = cur->right;       // 走訪右子樹
    }
    return res;
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
	ans=mysol.inorderTraversal(Root);
	for(int &n:ans){
		cout<<n<<',';
	}
	
	return 0;
}