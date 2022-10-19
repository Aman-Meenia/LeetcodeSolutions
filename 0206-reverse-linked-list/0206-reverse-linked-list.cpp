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
    ListNode* reverseList(ListNode* head) {
    ListNode * previous= NULL;
        ListNode *nextelement=head;
        while(head!=NULL){
            nextelement=head->next;
            head->next=previous;
            previous=head;
            head=nextelement;
        }
        return previous;
    }
};