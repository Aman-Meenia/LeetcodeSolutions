class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& inter) {
        vector<int> ans;
        int n = inter.size();
        vector<int> v;
        
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            int a = inter[i][0];
            v.push_back(a);
            mp[a]=i;
        }
sort(v.begin(),v.end());
     // for(auto a:v){
     //     cout<<a<<" ";
     // }cout<<endl;
        for(int i=0; i<n; i++){
        int a = inter[i][0];
            int b = inter[i][1];
           
            int index = lower_bound(v.begin(),v.end(),b)-v.begin();  
            if(index==n){
           ans.push_back(-1);
            }else{
                ans.push_back(mp[v[index]]);
            }
            
        }
  

        
        
        
        
        return ans;
    }
};