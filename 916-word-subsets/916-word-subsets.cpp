class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> maximumcnt(26,0);
        for(auto a:words2){
            
            string t = a;
            vector<int> v(26,0);
            for(auto it:t){
           v[it-'a']+=1;
                if(maximumcnt[it-'a']<v[it-'a']){
              maximumcnt[it-'a']=v[it-'a'];
                }
            }
           
        }
        
        
        // for(auto a:maximumcnt){
        //     cout<<a<<" ";
        // }cout<<endl;
        
        
        for(auto a: words1){    
            string t=a;
            vector<int> temp(26,0);
            int check=true;
            for(auto it:t){
                temp[it-'a']+=1;
            }
            for(int i=0; i<26; i++){
                if(temp[i]<maximumcnt[i]){
                    check=false;
                    break;
                }
            }
            if(check==true){
                ans.push_back(t);
            }
            
        
        
        }
        
        
        
        
        return ans;
        
        
        
        
        
        
        
    }
};