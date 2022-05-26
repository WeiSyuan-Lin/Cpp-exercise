#include<iostream>

using namespace std;


struct TreeNode {
	int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

TreeNode* create_node(int val)
{
	//node* n = (node*)malloc(sizeof(node));
	TreeNode* n = new TreeNode;
	n->val = val;
	n->left = NULL;
	n->right = NULL;
	return n;
}

void insert_node(TreeNode* Root, TreeNode* node, char c){
	switch(c){
	case'L':
	node->left = Root->left;
	Root->left = node;
	break;
	case'R':
	node->right = Root->right;
	Root->right = node;
	break;
	}
}
TreeNode* MultiInput(TreeNode* Root,int input,char c){
	
	insert_node(Root, create_node(input), c);
	
}
	
