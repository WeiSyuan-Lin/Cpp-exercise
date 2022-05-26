#include <iostream>
using namespace std;
 
 
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* create_node(int val)
{
	//node* n = (node*)malloc(sizeof(node));
	ListNode* n = new ListNode;
	n->val = val;
	n->next = NULL;
	return n;
}

void insert_node(ListNode* n1, ListNode* n2)
{
	n2->next = n1->next;
	n1->next = n2;

}

void print_lists(ListNode* lists)
{
	ListNode *n = lists;
	while (n != NULL)
	{
		cout << n->val;
		n = n->next;
	}
	cout << endl;
}

ListNode* MultiInput(){
	cout<<"enter nodes, if finised, enter -1"<<"\n";
	int input; 
	cin>>input;
	ListNode* list = create_node(input);
	ListNode*temp=list;
	int cnt=1;
	while(cin>>input and input!=-1){
		
		if(cnt==1){
			insert_node(list,create_node(input));
			cnt++;
		}
		else{
			insert_node(temp->next,create_node(input));
			cnt++;
			temp=temp->next;
		}
		
	}
	return list;
	
}
