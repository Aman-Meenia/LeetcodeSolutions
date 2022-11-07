class TrieNode{
public:
    TrieNode *children[26];
    bool End_Of_Word;


    TrieNode(){
        for(int i=0; i<26; i++){
            children[i]=NULL;
        }
        End_Of_Word=false;
    }


    void insertword(TrieNode * root , string s){

TrieNode * temp = root;

for(int i=0; i<s.size(); i++){
    char ch = s[i];
    if(temp->children[ch-'a']==NULL){
        TrieNode *n = new TrieNode();
        temp->children[ch-'a']=n;
    }
    temp=temp->children[ch-'a'];
}
temp->End_Of_Word=true;


    }


bool searchword(TrieNode *root , string s, int cnt){
    TrieNode * temp = root;
    // cout<<s<<endl;
    for (int i = 0; i <s.size(); ++i)
    {
        char ch = s[i];
        if(temp->children[ch-'a']==NULL) {
            return false;
        }
        temp = temp->children[ch-'a'];
        if(temp->End_Of_Word==true) {
 
            if(i==s.size()-1 && cnt>0) return true;
            else if(i==s.size()-1 && cnt==0) return false;
            // cout<<"Aman Meenia "<<endl;

            if(searchword(root,s.substr(i+1),cnt+1)) return true;
        }

    }
    
    return false;
}





};



class Solution {
public:
  
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string> ans;
        TrieNode *t1 = new TrieNode();
        
        for(auto a:words){
            t1->insertword(t1,a);
        }
        for(auto a:words){
            if(t1->searchword(t1,a,0)){
                ans.push_back(a);
            }
        }
//         if(t1->searchword(t1,t1,"cats")){
//     cout<<"PRESENT"<<endl;
// }else{
//     cout<<"NOT PRESENT "<<endl;
// }
        return ans;
    }
};