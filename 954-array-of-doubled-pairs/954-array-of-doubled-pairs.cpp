class Solution {
public:
    bool canReorderDoubled(vector<int>& v) {
        map<int,int> mp;
        for(auto a:v){
            if(a>=0){
                mp[a]+=1;
            }
        }
        
        for(auto a:mp){
            // cout<<"a.first "<<a.first<<" a "<<a.second<<endl;
            if(a.first==0){
                if(mp[a.first]%2!=0) return false;
                continue;
            }
            int t = 2*a.first;
            // cout<<" t "<<t<<endl;
            //    cout<<" mp[t] "<<mp[t]<<endl;
            if(mp[t]<mp[a.first]) return false;
            else {
                if(mp[t]==mp[a.first]){
                    // cout<<"AMAN "<<endl;
                    auto it = mp.find(t);
                    mp.erase(it);
                }else{
                    mp[t]-=mp[a.first];
                }
            }
        }
        
        mp.clear();
        for(auto a:v){
            if(a<0){
                mp[-a]+=1;
            }
        }
               for(auto a:mp){
                               // cout<<"a.first "<<a.first<<" a.second "<<a.second<<endl;
            if(a.first==0){
                if(mp[a.first]%2!=0) return false;
                continue;
            }
            int t = 2*a.first;
                   // cout<<" mp[t] "<<mp[t]<<endl;
            if(mp[t]<mp[a.first]) return false;
            else {
                if(mp[t]==mp[a.first]){
                    auto it = mp.find(t);
                    mp.erase(it);
                }else{
                    mp[t]-=mp[a.first];
                }
            }
        }
        return true;
        
        
    }
};