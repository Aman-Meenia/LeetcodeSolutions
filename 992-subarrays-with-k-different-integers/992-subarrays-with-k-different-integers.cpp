class Solution {
public:
    
    
    int atmostkinteger(vector<int> & v, int k){
        int n = v.size();
        
        int low = 0;
        int high = 0;
        int ans = 0;
        int size = n;
        unordered_map<int,int> mp;
        while(high<size){
            mp[v[high]]+=1;
            if(mp.size()<=k){
                            cout<<high-low+1<<endl;
               ans+=high-low+1; 
            }
            if(mp.size()>k){
                while(mp.size()>k){
                    mp[v[low]]-=1;
                    if(mp[v[low]]==0){
                auto it = mp.find(v[low]);
                        mp.erase(it);
                    }
                    low++;
                }
                cout<<high-low+1<<endl;
                	  ans+=high-low+1;
            }
            high++;
        }
        return ans;
        
    }
    
    
    
    
    int subarraysWithKDistinct(vector<int>& v, int k) {
return atmostkinteger(v,k)-atmostkinteger(v,k-1);
    }
};