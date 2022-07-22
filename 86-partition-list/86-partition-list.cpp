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
        vector<int> v1;
        vector<int> v2;
        
        while(head!=NULL){
            if(head->val<x){
                v1.push_back(head->val);
            }else {
                   v2.push_back(head->val);
            }
            head=head->next;
        }
        ListNode * ans=new ListNode(NULL);
        ListNode * temp =ans;
        for(auto a:v1){
            ListNode * n=new ListNode(a);
         temp->next=n;
            temp=temp->next;
            }
        
        for(auto a:v2){
            ListNode * n=new ListNode(a);
         temp->next=n;
            temp=temp->next;
            }
        return ans->next;
    }
};