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
class Solution {
public:
    unordered_map<int,char> m;
    vector<string> ans;
    string temp;
    void inorder(TreeNode * root){

        if(root==NULL){
            return;
        }
        if(root->left==NULL&& root->right==NULL){

               string t=temp;
            t.push_back(m[root->val]);

        
            reverse(t.begin(),t.end());
ans.push_back(t);
            return;
        }
       
        
            temp.push_back(m[root->val]);
       inorder(root->left);
      inorder(root->right);
        temp.pop_back();
        
    }

    string smallestFromLeaf(TreeNode* root) {
        char a='a';

    for(int i=0; i<=25; i++){
        m[i]=a+i;

    }
        inorder(root);
        sort(ans.begin(),ans.end());
     return ans[0];   
    }

};