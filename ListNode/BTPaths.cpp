#include<iostream>
#include<vector>
#include<string>
#include"TreeNode.h"
using namespace std;

class Solution {
public:
    void dfs(TreeNode* root, string str, vector<string> &res){
        if (!root){
           return;
        }else{
            if (str == ""){
                str += to_string(root->val);
            }else{
                str = str + "->" + to_string(root->val);    
            }
            if (!root->right && !root->left){
                if (str!=""){
                    res.push_back(str);
                }
            }
            dfs(root->left, str,res);
            dfs(root->right, str,res);
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string str = "";
        vector<string> res;
        dfs(root,str,res);
        return res;
    }
};

int main(){
	
    TreeNode* Root = create_node(1);

	Root=MultiInput(Root,2,'L');
	
	Root=MultiInput(Root,3,'R');
    
	Root->left=MultiInput(Root->left,5,'R');
	
	Solution mysol;
	vector<string> ans=mysol.binaryTreePaths(Root);
	for(string &n:ans){
		cout<<n<<endl;
	}
	return 0;
}