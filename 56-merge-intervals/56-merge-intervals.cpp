class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
     sort(v.begin(),v.end());
        int start=v[0][0];
        int n = v.size();
        int end = v[0][1];
        vector<vector<int> > ans;
        for(int i=1; i<n; i++){
           if(v[i][0]<=end){
              end=max(end,v[i][1]); 
           } else{
                ans.push_back({start,end});
          start=v[i][0];
               end=v[i][1];
           }
        }
        
        ans.push_back({start,end});
        return ans;
    }
};