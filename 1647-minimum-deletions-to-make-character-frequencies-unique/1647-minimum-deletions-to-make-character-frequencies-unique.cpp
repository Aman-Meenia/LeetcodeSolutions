class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
      for(auto a:s){
          mp[a]+=1;
      }  
        vector<int> v;
        
        for(auto a:mp){
        v.push_back(a.second);
        }
        mp.clear();
        int count=0;
        unordered_set<int> st;
        for(auto a:v){

            if(st.find(a)!=st.end()){
                int temp=a;
            
               while(temp>=0 && st.find(temp)!=st.end()){
                   temp--;
                   count++;
               }
                if(temp>0){
                    
                    st.insert(temp);
                }
                
                
            }else{
                
                  st.insert(a); 
            }
        }
       return count; 
        
    }
};