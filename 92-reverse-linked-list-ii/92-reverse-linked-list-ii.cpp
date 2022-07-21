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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        int k=1;
        while(head!=NULL){
            if(k<left){
               v1.push_back(head->val); 
            }else if(k>=left && k<=right){
                   v2.push_back(head->val);   
            }else{
                 v3.push_back(head->val);   
            }
            head=head->next;
            k++;
        }
        
        ListNode * ans = new ListNode(NULL);
        ListNode * temp = ans;
        
        // for(auto a:v1){
        //     cout<<a<<" ";
        // }cout<<endl;
        //   for(auto a:v2){
        //     cout<<a<<" ";
        // }cout<<endl;
        //   for(auto a:v3){
        //     cout<<a<<" ";
        // }cout<<endl;

        
        for(int i=0; i<v1.size(); i++){
              ListNode * n = new ListNode(v1[i]);
           
            temp->next=n;
                    // cout<<temp->val<<endl;
             temp=temp->next;
    
        } 
        for(int i=v2.size()-1; i>=0; i--){
              ListNode * n = new ListNode(v2[i]);
            temp->next=n;
            temp=temp->next;
            
        }
        
        
         for(int i=0; i<v3.size(); i++){
              ListNode * n = new ListNode(v3[i]);
            temp->next=n;
            temp=temp->next;
            
        }
        
        
        
        
        
        return ans->next;
    }
};