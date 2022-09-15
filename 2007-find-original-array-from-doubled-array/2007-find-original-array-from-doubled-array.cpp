class Solution {
public:
    vector<int> findOriginalArray(vector<int>& v) {
map<int,int> mp;
        for(auto a:v){
        mp[a]+=1;
        }
vector<int> ans;
        for(auto a:mp){
            if(a.first==0){
                if(mp[a.first]%2!=0) return {};
                   for(int k=0; k<(mp[a.first]/2); k++){
            ans.push_back(a.first);
            }
                continue;
            }
            int t =a.first*2;
            
            if(mp[t]<mp[a.first]){
                return {};
            }
            
            for(int k=0; k<mp[a.first]; k++){
            ans.push_back(a.first);
            }
            if(mp[t]==mp[a.first]){
            if(mp.find(t)!=mp.end()){
            auto it = mp .find(t);
                     mp.erase(it);
            }
            }else{
           mp[t]-=mp[a.first];
            }
            
       

        }
        return ans;
    }
};