class Solution {
public:
    int minSetSize(vector<int>& v) {
     map<int,int> mp;
        for(auto a:v){
            mp[a]+=1;
        }
        int sum = 0;
        int ans = 0;
        int n = v.size();
        vector<int> t;
for(auto a:mp){
t.push_back(a.second);
}
      
        sort(t.begin(),t.end());
        for(int i=t.size()-1; i>=0; i--){
sum+=t[i];
            ans++;
            if(sum>=n/2) return ans;
        
        
        }
        return ans; 
    }
};