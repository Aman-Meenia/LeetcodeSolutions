#define ll long long
class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       unordered_map<int,int> mp;
        int size = time.size();
        for(int i=0; i<size; i++){
            time[i]=time[i]%60;
    
            mp[time[i]]+=1;
        }
        ll ans = 0;
        for(int i=0; i<60; i++){
            if(i==0){
                ll t = mp[0];
                t-=1;
                ans+=(t*(t+1)/2);
                
               
            }else{
                ll t = mp[i];
                ll k = mp[60-i];
               
                mp[i]=0;
                mp[60-i]=0;
                
                if(i==30){
                    t-=1;
              ans+=(t*(t+1)/2);
                }else{
                    
                ans+=t*k;
                  
                }
            }
        }
        return ans;
    }
};