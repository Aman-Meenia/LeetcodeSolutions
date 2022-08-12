class Solution {
public:
    unordered_map<char,int> mp;
    int fun(vector<string> &words , int i ,vector<int> &score){
        if(i==words.size()) return 0;
        
        int ans1 = 0;
       ans1= fun(words,i+1,score);
        
        bool cnd = true;
        int ans2 = 0;
           int ans3 = 0;
        for(int j=0; j<words[i].size(); j++){
            if(mp.find(words[i][j])!=mp.end()){
                if( mp[words[i][j]]==0){
                    cnd=false;
                }
                mp[words[i][j]]-=1;
                ans2+=score[words[i][j]-'a'];
              
            }else{
                cnd = false;
           
            
            }
        }
        if(cnd==true) ans3 = ans2+ fun(words,i+1,score);
          for(int j=0; j<words[i].size(); j++){
            if(mp.find(words[i][j])!=mp.end()){
                mp[words[i][j]]+=1;
                
            }
        }
        
        return max(ans1,ans3);
        
        
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
      for(auto a: letters){
          mp[a]+=1;
      }  
        
        return fun(words,0,score);
        
    }
};