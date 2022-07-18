class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int> > ans;
        int n=v.size();
        sort(v.begin(),v.end());
        int previousstart=v[0][0];
        
         int previousend=v[0][1];
        for(int i=1; i<n; i++){
            int start=v[i][0];
            int end=v[i][1];
            if(start<=previousend){
                previousend=max(end,previousend);
            }else{
                ans.push_back({previousstart,previousend});
                previousstart=start;
                    previousend=end;
            }
            
            
        }
         ans.push_back({previousstart,previousend});
        return ans;
        
        
    }
};