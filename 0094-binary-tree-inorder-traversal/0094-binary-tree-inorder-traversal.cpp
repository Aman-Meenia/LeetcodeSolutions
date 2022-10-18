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
    vector<int> v;
    void iterativeiorder(TreeNode * root){

if(root==NULL) return;
stack<TreeNode* >st;

TreeNode * n = root;

while(true){

while(n!=NULL){
	st.push(n);
	n=n->left;
}
if(st.empty()){
	for(auto a:v){
		cout<<a<<" ";
	}cout<<endl;
	return ;
}else{
TreeNode * t = st.top();
      	v.push_back(t->val);
n=t->right;
  
st.pop();


}


}

}
    vector<int> inorderTraversal(TreeNode* root) {
        iterativeiorder(root);
        return v;
    }
};