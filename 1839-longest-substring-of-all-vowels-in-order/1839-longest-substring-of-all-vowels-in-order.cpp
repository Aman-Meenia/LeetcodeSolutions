class Solution {
public:
    int longestBeautifulSubstring(string s) {
        
        int n = s.size();
        int low = 0 ;
        int high = 1;
        vector<char> v={'a','e','i','o','u'};
        unordered_map<char,int> mp;
        mp['a']=0;
        mp['e']=1;
        mp['i']=2;
        mp['o']=3;
        mp['u']=4;
        int ans= 0 ;
        
        while(high<n){
            
            if(low==high && s[low]!='a') low++;
            else{
   char t = s[high-1];
                int temp = mp[s[high-1]];
               if(t==s[high] || temp<=3 && s[high]==v[temp+1]){
                   
               } else{
                   low=high;
                   if(s[low]!='a') low++;
               }
                
                
            }

            if(s[low]=='a'&&s[high]=='u'){
            ans = max(ans,high-low+1);
            }
            high++;
            
        }
        return ans;
    }
};