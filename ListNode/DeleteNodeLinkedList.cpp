#include<iostream>
#include"LinkNode.h"
using namespace std;

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next=node->next->next;
    }
};

int main(){
	ListNode *list=MultiInput();
	Solution mysol;
	mysol.deleteNode(list->next);
	print_lists(list);
	return 0;
}