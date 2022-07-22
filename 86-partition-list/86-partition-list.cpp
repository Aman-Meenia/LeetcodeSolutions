/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
ListNode * low=new ListNode(NULL);
ListNode * n1=low;
        ListNode * high=new ListNode(NULL);
        ListNode * n2=high;
        while(head!=NULL){
            if(head->val<x){
                 ListNode * n=new ListNode(head->val);
                n1->next=n;
                n1=n1->next;
            }else{
                ListNode * n=new ListNode(head->val);
                n2->next=n;
                n2=n2->next; 
            }
            
            
            
            
            
            head=head->next;
        }
        n2->next=NULL;
        n1->next=high->next;
        return low->next;
    }
    
};