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
        
        for(int i=0; i<v1.size(); i++){
            int count=0;
            for(int j=0; j<v2.size(); j++){
                if(v2[j]>v1[i]){
                    count++;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};