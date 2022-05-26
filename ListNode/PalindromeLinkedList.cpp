#include<iostream>
#include"LinkNode.h"
using namespace std;

class Solution {
public:
    ListNode* reversedList(ListNode* head){
        ListNode* head2=head;
        ListNode* prev=NULL;
        ListNode* next;
        while(head2!=NULL){
            next=head2->next;
            head2->next=prev;
            prev=head2;
            head2=next;
        }
        return prev ;
    }
    ListNode* getPalindromeStartNode(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (true)
        {
            slow = slow->next;
            fast = fast->next->next;
            
            if (fast == NULL)
                return slow;
            if (fast->next == NULL)
                return slow->next;
        }
    }
    bool isPalindrome(ListNode* head) {
         if (head == NULL || head->next == NULL)
            return true;
        ListNode* second = getPalindromeStartNode(head);
        // ListNode* pStartNode = revereList(second);
        ListNode* pStartNode = reversedList(second);
        while (pStartNode != NULL)
        {
            if (head->val != pStartNode->val)
                return false;
            head = head->next;
            pStartNode = pStartNode->next;
        }        
        return true;
    }     
};

int main(){
	ListNode *list=MultiInput();
	Solution mysol;
	if(mysol.isPalindrome(list)){
		cout<<"true"<<endl;
	}	
	else{
		cout<<"false"<<endl;
	}
	return 0;
}