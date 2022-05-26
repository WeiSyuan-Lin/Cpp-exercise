#include<iostream>
#include"LinkNode.h"
using namespace std;

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB){
        int lenA=0;
        int lenB=0;
        ListNode *iterA=headA;
        ListNode *iterB=headB;
        while(iterA!=NULL){
            lenA++;
            iterA=iterA->next;
        }
        while(iterB!=NULL){
            lenB++;
            iterB=iterB->next;
        }
        iterA=headA;
        iterB=headB;
        int diff=(lenA-lenB);
        if(diff>0){
            while(diff>0){
                iterA=iterA->next;
                diff--;
            } 
        }
        else{
            while(diff<0){
                iterB=iterB->next;
                diff++;
            }
        }
        for(int i=0;i<max(lenA,lenB);i++){
            if(iterA->val==iterB->val){
                return iterA;
            }
            else{
                iterA=iterA->next;
                iterB=iterB->next;
            }
        }
        return NULL; 
    }
};
int main(){
	ListNode *headA=MultiInput();
	ListNode *headB=MultiInput();
	Solution mysol;
	print_lists(mysol.getIntersectionNode(headA, headB));	
	
	return 0;
}