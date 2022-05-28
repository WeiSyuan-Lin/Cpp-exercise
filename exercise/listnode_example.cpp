#include<iostream>
using namespace std;
struct ListNode{
	int val;
     ListNode *next;
};

int main(){
	ListNode *list=new ListNode;
	list->val=10;
	list->next=NULL;
	
	ListNode *node1=new ListNode;
	node1->val=1;
	node1->next=NULL;
	
	node1->next=list->next;
	list->next=node1;
	
	ListNode *node2=new ListNode;
	node2->val=6;
	node2->next=NULL;
	
	
	node2->next=node1->next;
	node1->next=node2;
	
	cout<<list->val<<endl;
	cout<<list->next->val<<endl;
	cout<<list->next->next->val<<endl;
	
	list->next=node2;
	delete node1;
	
	cout<<list->val<<endl;
	cout<<list->next->val<<endl;
	cout<<list->next->next->val<<endl;

	
	return 0;
}