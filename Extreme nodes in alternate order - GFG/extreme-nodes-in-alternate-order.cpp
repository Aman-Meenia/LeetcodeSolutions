//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}

// } Driver Code Ends
/*
 A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /* Function to print nodes of extreme corners
    of each level in alternate order */
    
vector<int>  extreme_corners(Node * root){



vector<int> ans;

queue<Node *> q;
q.push(root);
int cnt = 0;

while(!q.empty()){


int size=q.size();

for(int i=0; i<size; i++){

Node *n= q.front();
q.pop();


if(cnt ==0 || cnt%2==1){
    if(i==0){
        ans.push_back(n->data);
    }
}else if(cnt%2==0 && i==size-1){
ans.push_back(n->data);
}
if(n->left){
    q.push(n->left);
}
if(n->right){
    q.push(n->right);
}





}
cnt++;







}




return ans;


}





    vector<int> ExtremeNodes(Node* root)
    {
        // Your code here
        return  extreme_corners(root);
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
	scanf("%d ",&t);
    while(t--)
    {
        string s;
		getline(cin,s);
		Node* root = buildTree(s);
		Solution obj;
        vector<int> nodes =  obj.ExtremeNodes(root);
        for(int i = 0;i<nodes.size();i++){
            cout<<nodes[i]<<" ";
        }
   		cout<<endl;
  }
  return 0;
}

// } Driver Code Ends