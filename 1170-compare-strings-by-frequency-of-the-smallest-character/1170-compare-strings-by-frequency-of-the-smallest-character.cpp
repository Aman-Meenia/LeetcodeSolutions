class Solution {
public:
    
    
    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> v1;
        vector<int> v2;
        
        for(auto a:queries){
            string t=a;
            sort(t.begin(),t.end());
            char k=t[0];
            int count=0;
          for(auto it:t){
              if(it==k){
                  count++;
              }
          }
            v1.push_back(count);
        } for(auto a:words){
            string t=a;
            sort(t.begin(),t.end());
            char k=t[0];
            int count=0;
          for(auto it:t){
              if(it==k){
                  count++;
              }
          }
            v2.push_back(count);
        }
        vector<int> ans;
        sort(v2.begin(),v2.end());
        for(int i=0; i<v1.size(); i++){
            int it=upper_bound(v2.begin(),v2.end(),v1[i])-v2.begin();
       int t=v2.size()-it;
            // t+=1;
             ans.push_back(t); 
            
            }
            // ans.push_back(count);
        
        return ans;
    }
};