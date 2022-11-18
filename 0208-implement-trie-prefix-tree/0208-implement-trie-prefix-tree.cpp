
class Trie1 {
public:
    
        Trie1 *children[26];
    bool EndOfString=false;

    Trie1(){
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
    } 
    
    
    void insert(Trie1 * &root,string s) {
         Trie1 * temp = root;

    for(int i=0; i<s.size(); i++){
        if(temp->children[s[i]-'a']==NULL){
Trie1 * n = new Trie1();
temp->children[s[i]-'a']=n;
        }
        temp = temp->children[s[i]-'a'];
    }
    temp->EndOfString=true;
    }
    
    bool search(Trie1 * &root,string s) {
         Trie1 * temp = root;
    for(int i=0; i<s.size(); i++){
        if(temp->children[s[i]-'a']==NULL){
return false;
        }
        temp = temp->children[s[i]-'a'];
    }

    if(temp->EndOfString) return true;
    return false;
    }
    
    bool startsWith(Trie1 * &root,string s) {
            Trie1 * temp = root;
    for(int i=0; i<s.size(); i++){
        if(temp->children[s[i]-'a']==NULL){
return false;
        }
        temp = temp->children[s[i]-'a'];
    }

return true;

    }
};

class Trie {
public:
    Trie1 *t= new Trie1();
    
    Trie() {
        
    }
    
    void insert(string word) {
        t->insert(t,word);
    }
    
    bool search(string word) {
        return t->search(t,word);
    }
    
    bool startsWith(string prefix) {
        return t->startsWith(t,prefix);
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */