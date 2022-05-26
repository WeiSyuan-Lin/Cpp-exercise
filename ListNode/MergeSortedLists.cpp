#include<iostream>
#include"LinkNode.h"

using namespace std;


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL){
            return list2;
        }

        if(list2 == NULL) {
            return list1;
        }

        ListNode *head = NULL;

        if(list1->val < list2->val){
            head = list1;
            list1 = list1->next;
        } else {
            head = list2;
            list2 = list2->next;
        }

        ListNode *p;
        p = head;

        while(list1 && list2){
            if(list1->val < list2->val){
                p->next = list1;
                list1 = list1->next;
            } else {
                p->next = list2;
                list2 = list2->next;
            }

            p = p->next;
        }

        if(list1 != NULL){
            p->next = list1;
        } else {
            p->next = list2;
        }

        return head;
    }
};

int main(){
	
	ListNode* list1=MultiInput();
	ListNode* list2=MultiInput();
	Solution mysol;
	mysol.mergeTwoLists(list1,list2);

	print_lists(list1);
	cout << "\n";
	print_lists(list2);
	return 0;
}