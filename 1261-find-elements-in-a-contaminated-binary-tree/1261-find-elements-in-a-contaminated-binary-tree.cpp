/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class FindElements {
public:  
    unordered_set<int> s;
    
      void inorder(TreeNode* root, int x) {
        if (root==NULL) return;
        root->val = x;
        s.insert(x);
          // cout<<"x "<<x<<endl;
        inorder(root->left, 2 * x + 1);
        inorder(root->right, 2 * x + 2);
    }
    
    
    FindElements(TreeNode* root) {
        inorder(root,0);
    }
    
    bool find(int target) {
        if(s.find(target)!=s.end()){
            return true;
        }
        return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */