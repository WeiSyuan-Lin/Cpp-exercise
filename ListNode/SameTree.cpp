#include<iostream>
#include"TreeNode.h"
using namespace std;


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) // 兩棵 trees 都 traverse 到底沒有遇到不同的 nodes
      return true;
    if (!p || !q) // 有一棵 tree 先走到底
      return false;
    // postorder traversal
    if (!isSameTree(p->left, q->left)) // 先走訪兩棵 trees 的左 subtrees
      return false;
    if (!isSameTree(p->right, q->right)) // 再走訪它們的右 subtrees
      return false;
    return p->val == q->val; // 最後比較父 node 是否相同
        
    }
};
int main(){
	TreeNode* Roota=create_node(1);
	TreeNode* nodela=create_node(2);
	TreeNode* node2a=create_node(3);
	
	insert_node(Roota, nodela, 'L');
	insert_node(Roota, node2a, 'R');
	
	TreeNode* Rootb=create_node(1);
	TreeNode* nodelb=create_node(2);
	TreeNode* node2b=create_node(3);
	
	insert_node(Rootb, nodelb, 'L');
	insert_node(Rootb, node2b, 'R');
	
	Solution mysol;
	if(mysol.isSameTree(Roota,Rootb)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	return 0;
}