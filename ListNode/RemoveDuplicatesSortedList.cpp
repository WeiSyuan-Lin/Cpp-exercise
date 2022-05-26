#include<iostream>
#include"LinkNode.h"
using namespace std;

/**
 * Definition for singly-linked list.
 */


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr or head->next==nullptr) return head;
        ListNode *cur=head;
        while(cur->next){
            if(cur->val==cur->next->val){
                ListNode *temp=cur->next;
                cur->next=temp->next;
                delete temp;
            }
            else{
                cur=cur->next;
            }
        }
        return head;       
    }
};

int main(){
		
	ListNode* list1=MultiInput();
	Solution mysol;
	
	print_lists(list1);
	cout << "\n";
	
	mysol.deleteDuplicates(list1);

	print_lists(list1);
	cout << "\n";
	return 0;
}