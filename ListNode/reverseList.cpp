#include<iostream>
#include"LinkNode.h"
using namespace std;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* next;
        while(head!=NULL){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;      
    }
};
int main(){
	ListNode *list=MultiInput();
	
	Solution mysol;
	print_lists(mysol.reverseList(list));	
	
	return 0;
}