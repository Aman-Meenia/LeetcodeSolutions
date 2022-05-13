class Solution {
public:
    Node* connect(Node* root) {
      if(root==NULL){
    return root;
}
         queue<Node *> q;
        q.push(root);
        while(!q.empty()){
          int  size=q.size();
            
            for(int i=0; i<size; i++){
 Node* n=q.front();              
        
            q.pop(); 
                if(i!=size-1){
                    n->next=q.front();
                    }
                if(n->left){             
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
            }
    
        }
       return  root;  
    }
};