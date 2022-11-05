


class TrieNode{
public:
    TrieNode * children[26];
    bool End_Of_Word=false;
    char data;
TrieNode(){
    for(int i=0; i<26;  i++){
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

            if(currentnode->children[cur-'a']==NULL) return false;
            currentnode=currentnode->children[cur-'a'];
        }
        if(currentnode->End_Of_Word==true) return true;
        return false;
    }


bool startwithprefixword(TrieNode * root , string s){
    TrieNode * currentNode =root;
    for(int i=0; i<s.size(); i++){
        char cur=s[i];
        if(currentNode->children[cur-'a']==NULL) return false;
        currentNode=currentNode->children[cur-'a'];
    }
    return true;
}









};






class Trie {
public:
    TrieNode * root=new TrieNode();
    
    Trie() {
        
    }
    
    void insert(string word) {
       root->insertword(root,word);
    }
    
    bool search(string word) {
     if(root->searchword(root,word)) return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        if(root->startwithprefixword(root,prefix)) return true;
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */