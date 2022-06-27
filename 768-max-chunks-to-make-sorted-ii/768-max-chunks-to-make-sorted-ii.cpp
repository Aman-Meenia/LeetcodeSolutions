class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
        
vector<int> temp(v.begin(),v.end());
        sort(temp.begin(),temp.end());
        
        int n=v.size();
        int count=0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            mp[temp[i]]+=1;
            if(mp[temp[i]]==0){
                 auto it=mp.find(temp[i]);
                    mp.erase(it);
            }
            if(mp.find(v[i])!=mp.end()){
                        mp[v[i]]-=1;
                if(mp[v[i]]==0){
                    auto it=mp.find(v[i]);
                    mp.erase(it);
                }
            }else{
        mp[v[i]]=-1;
                }
            // for(auto a:mp){
            //     cout<<a.first<<" second  "<<a.second<<endl;
            // }cout<<endl;
            if(mp.size()==0){
                count++;
            }
            
            
            
        }
        return count;
    }
};