class Solution {
public:
    string minWindow(string s, string t) {
        
        unordered_map<char,int> st ;
        for(auto a:t){
       st[a]+=1;
        }
        string tt;
        unordered_map<char,int> mp;
        int size=s.size();
        int n = t.size();
        int ans = INT_MAX;
        int low = 0 ;
        int totalcnt=0;
            
        int high = 0;
        while(high<size){
            
            char temp = s[high];
            if(st.find(temp)!=st.end()){
                mp[temp]+=1;
                if(mp[temp]<=st[temp]) totalcnt+=1;
                
            }
            while(low<=high && st.find(s[low])==st.end() || low<high && mp[s[low]]>st[s[low]]){

                if(mp.find(s[low])!=mp.end()){
           if(mp[s[low]]<=st[s[low]]) totalcnt-=1;
                    mp[s[low]]-=1;

                    if(s[low]==0){
                        auto it = mp.find(s[low]);
                        mp.erase(it);
                    }
                }
low++;
            }
            if(mp.size()==st.size()&&totalcnt==t.size()) {
                if(high-low+1<ans){
tt=s.substr(low,high-low+1);
                    ans = high-low+1;
                }
                
            }
            // else{
            //     cout<<" mp.size() "<<mp.size()<<endl;
            //     for(auto a:mp){
            //         cout<<a.first<<" ";
            //     }cout<<endl;
            //     cout<<" temp "<<s.substr(low,high-low+1)<<endl;
            // }
            high++;
        }
if(ans == INT_MAX) return "";
return tt;
        
        
        
        
        
        
        
    }
};