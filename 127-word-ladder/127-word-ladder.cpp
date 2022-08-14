class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        
        
         unordered_set<string> mp;
        
        
        
        unordered_set<string> st;
        
        
        
        for(auto a:wordList){
            st.insert(a);
        }
        queue<string> q;
        q.push(beginWord);
        int mindistance = 1;
        int ans = 0 ;
        mp.insert(beginWord);
        while(!q.empty()){
            int size = q.size();
            mindistance++;
            for(int i=0; i<size; i++){
             string t = q.front();
                q.pop();
                
                for(int k=0; k<t.size(); k++){
                    
                    for(int pp=0; pp<26; pp++){
                        string tempp = t;
                        char change = 'a'+pp;
                        tempp[k]=change;

                        
                        if(st.find(tempp)!=st.end() && mp.find(tempp)==mp.end()){

                            q.push(tempp);
                            mp.insert(tempp);
                        }
            if(tempp==endWord && st.find(endWord)!=st.end()) return mindistance;
                            
                            
                    }
                    
                    
                    
                }
                
                
                
                
                
            }
            
        }
        return 0;
    }
};