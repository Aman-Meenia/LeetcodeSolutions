
class TrieNode{
public:
    TrieNode * children[26];
    bool End_Of_Word=false;
    char data;
TrieNode(){
    for(int i=0; i<26; i++){
        children[i]=NULL;
    }
}

 
 
    void insertword(TrieNode *root , string s){
TrieNode *currentnode = root;
for(int i=0; i<s.size(); i++){
    char cur = s[i];

    //  if Element is not already present in our trie
    if(currentnode->children[cur-'a']==NULL){
        TrieNode * n = new TrieNode();
        currentnode->children[cur-'a']=n;

    }
    //  if element is already present we move to next childre
    currentnode = currentnode->children[cur-'a'];

}
// OUR WORD ENDS SO WE MAKE ITS CHILDREN NODE TRUE
currentnode->End_Of_Word=true;

    }



    bool searchword(TrieNode * root , string s){
TrieNode * currentnode = root;
        for(int i=0; i<s.size(); i++){
            char cur= s[i];
// cout<<cur<<endl;
            // cout<<currentnode->children[cur-'a']<<endl;
            if(currentnode->children[cur-'a']==NULL) return false;
            currentnode=currentnode->children[cur-'a'];
        }
        // if(currentnode->End_Of_Word==true) return true;
        return true;
    }












};
class Solution {
public:
int minsize=INT_MAX;
    
    void allpossible(vector<vector<char>> & v , int i , int j,int maxsize , string &temp,vector<vector<int> > & visited,TrieNode * root ){
        
        int n = v.size();
        int m= v[0].size();  
   
    // cout<<" temp "<<temp<<endl;
if(temp.size()>=minsize){
            root->insertword(root,temp);
}
        if(temp.size()>=maxsize){
// root->insertword(root,temp);
            return ;
        }
int array1[4]={1,-1,0,0};
        int array2[4]={0,0,-1,1};
        for(int k=0; k<4; k++){

            int x=i+array1[k];
            int y=j+array2[k];
            if(x>=0 && y>=0 && x<n && y<m &&visited[x][y]==0){
                    temp.push_back(v[x][y]);
                visited[x][y]=1;
                allpossible(v,x,y,maxsize,temp,visited,root);
                temp.pop_back();
                visited[x][y]=0;
            }
        }
        

    }
    
    
    
    
    vector<string> findWords(vector<vector<char>>& v, vector<string>& words) {
     vector<string> ans;
        int maxsize=0;
        for(auto a:words){
            int t = a.size();
            maxsize=max(maxsize,t);
            minsize=min(t,minsize);
        }
// cout<<"Maxsize "<<maxsize<<endl;
int n = v.size();
        int m = v[0].size();
        
TrieNode * root = new TrieNode();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                vector<vector<int> > visited(n,vector<int>(m,0));
                visited[i][j]=1;
                string temp;
                temp.push_back(v[i][j]);
                allpossible(v,i,j,maxsize,temp,visited,root);
}
        }
        // for(auto a:st){
        //     cout<<a<<" ";
        // }cout<<endl;
        for(auto a:words){
            cout<<" a is "<<a<<endl;
if(root->searchword(root,a)){
    ans.push_back(a);
}
        }
     return ans;   
        
        
        
        
        
    }
};