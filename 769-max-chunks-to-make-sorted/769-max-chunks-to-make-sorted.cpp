class Solution {
public:
    int maxChunksToSorted(vector<int>& v) {
      
vector<int> temp(v.begin(),v.end());
        sort(temp.begin(),temp.end());
        unordered_map<int,int> mp;
        int n=v.size();
        int count=0;
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
            
            if(mp.size()==0) count+=1;
            

        }
              return count;  
    }
};