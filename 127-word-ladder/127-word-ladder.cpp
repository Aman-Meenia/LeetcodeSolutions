class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
//         THIS MAP WE KEEP TRACK OF WORDS WHICH ARE ALREADY VISITED
        
//         EXAMPLE -> HOT -> DOG AND DOG AGAIN BE CONVERTED INTO THE HOT 
        
         unordered_set<string> mp;
        
//          FIRSTLY WE INSERT ALL THE WORDS IN THE SET TO CHECK WHETHER IT IS PRESENT IN A OUR WORDLIST OR NOT
        
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
//                      FOR LOOP TO MAKE ALL THE POSSIBLE ANSWER 
                    for(int pp=0; pp<26; pp++){
                        string tempp = t;
                        char change = 'a'+pp;
                        tempp[k]=change;

                        
                        if(st.find(tempp)!=st.end() && mp.find(tempp)==mp.end()){

                            q.push(tempp);
                            mp.insert(tempp);
                        }
                        
//                          IF OUR STRING EQUAL TO ANS SIMPLY RETURN 
            if(tempp==endWord && st.find(endWord)!=st.end()) return mindistance;
                            
                            
                    }
                    
                    
                    
                }
                
                
                
                
                
            }
            
        }
        return 0;
    }
};