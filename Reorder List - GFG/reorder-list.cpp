//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Following is the Linked list node structure */

/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{ 
public:
    void reorderList(Node* head) {
        Node * ans = new Node(0);
        Node * dummy = ans;
        Node * temp = head;
        vector<int> v;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp = temp ->next;
            
        }
        int low = 0;
        int high = v.size()-1;
        while(low<=high){
            if(low==high){
                        Node * n = new Node(v[low]);
                 
                dummy->next=n;
                     dummy=dummy->next;
            }else{
                Node * n = new Node(v[low]);
               
                dummy->next=n;
                     dummy=dummy->next;
                   Node * n2 = new Node(v[high]);
                
                dummy->next=n2;  
                     dummy=dummy->next;
            }
            low++;
            high--;
        }
        ans = ans ->next;
        // while(ans!=NULL){
        //     cout<<ans->data<<endl;
        //     ans = ans->next;
        // }
// head->data= 100;
head->next=ans->next;
// head=head->next;
// head=ans;
// ans=ans->next;

        
        // Your code here
    }
};

//{ Driver Code Starts.



/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }
        
        Solution ob;
        
        ob.reorderList(head);
        printList(head);
        freeList(head);
    }
    return 0;
}

// } Driver Code Ends