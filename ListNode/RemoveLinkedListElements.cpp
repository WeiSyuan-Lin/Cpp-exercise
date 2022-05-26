#include<iostream>
#include"LinkNode.h"
using namespace std;

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL) return head;
        head->next=removeElements(head->next,val);
        if(head->val==val){
            return head->next;
        }
        return head;  
    }
};
int main(){
	ListNode *list=MultiInput();
	int target;
	cout<<"enter the delete element"<<endl;
	cin>>target;
	Solution mysol;
	print_lists(mysol.removeElements(list, target));	
	
	return 0;
}