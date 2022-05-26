#include<iostream>
#include"LinkNode.h"
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL or head->next==NULL ){
            return false;
        }
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast->next!=NULL and fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow){
                return true;
            }
        }
        return false;
    }
};
int main(){
	ListNode *list;
    list=MultiInput();
	insert_node(list,list->next);
	
	Solution mysol;
	if(mysol.hasCycle(list)){
		cout<<"true"<<endl;
	}
	else{
		cout<<"false"<<endl;
	}
	
	return 0;
}