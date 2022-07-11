// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  unordered_map<Node *,int> mp;
    unordered_map<Node *,Node *> p;
  void fun(Node * root, Node * &n,int target,Node * parent){
      if(root==NULL){
          return ;
      }
      if(root->data==target){
        //   cout<<" Trget "<<root->data<<endl;
          n=root;
    mp[root]=0;
   
          
      }
       p[root]=parent;
        //   cout<<root->data<<endl;
      mp[root]=1;
fun(root->left,n,target,root);


fun(root->right,n,target,root);

      

  }
    int minTime(Node* root, int target) 
    {
        p[root]=NULL;
   Node * n;
   Node * parent=NULL;
   fun(root,n,target,parent);
   int ans=0;
   queue<Node * > q;
   q.push(n);
   mp[n]=0;
//      cout<<" Trget "<<n->data<<endl;
//   cout<<"q.size() "<<q.size()<<endl;
   while(!q.empty()){
       
       int size=q.size();
             ans+=1;
            //  cout<<q.size()<<endl;
       for(int i=0; i<size; i++){
           Node * t=q.front();
           q.pop();
     
        //   cout<<" t "<<t->data<<endl;
                // cout<<t->left->data<<endl;
           if(t->left && mp[t->left]==1){
            //   cout<<t->left->data<<endl;
               q.push(t->left);
               mp[t->left]=0;
           }
          
              if(t->right && mp[t->right]==1){
                //   cout<<" t-> right->val "<<t->right->data<<endl;
                            //  cout<<t->right->data<<endl;
               q.push(t->right);
               mp[t->right]=0;
           }
           Node * parentis=p[t];
           if(parentis!=NULL &&mp[parentis]==1){
            //   cout<<"parentis "<<parentis->data<<endl;
                 q.push(parentis);
               mp[parentis]=0;
           }
           
           
           
       }
    //   cout<<"AMAN "<<endl;
   }
   
   return ans-1;
    }
};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends