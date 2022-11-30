class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& temp) {
        unordered_map<int,vector<int> > mp;
        for(auto it : temp){
            int a = it[0];
            int b = it[1];
            mp[a].push_back(b);
        }
        int ans = 0;
        ans =(n- mp.size())*2;
        for(auto it : mp){
            vector<int> v(11,0);
            
            for(auto itt :it.second){
                v[itt]=1;
            }
        
            if(v[2]!=1 && v[3]!=1 && v[4]!=1 && v[5]!=1 &&v[6]!=1 && v[7]!=1 && v[8]!=1 && v[9]!=1){
                ans+=2;
            }else if(v[2]!=1 && v[3]!=1 && v[4]!=1 && v[5]!=1){
                ans+=1;
            }else if(v[6]!=1 && v[7]!=1 && v[8]!=1 && v[9]!=1){
                ans+=1;
            }else if( v[4]!=1 && v[5]!=1 &&v[6]!=1 && v[7]!=1){
                ans+=1;
            }
        }
        return ans;
        
    }
};