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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        int size=0;
        ListNode * t=head;
while(t!=NULL){
    size++;
    t=t->next;
}

        n=size-n;
  
        if(n==0){
            head=head->next;
            return head;
        }
        ListNode * temp = head;
        int cnt = 0;
        while(temp!=NULL &&n-1!=cnt){
          cnt++;
          temp=temp->next;
        }
        if(temp->next!=NULL){
            temp->next=temp->next->next;
        }
        return head ;
    }
};