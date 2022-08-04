class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;

        int low = 0;
        int high = 0;
        int size = s.size();
        int length=0;
        int ans = 0;
        while(high<size){
            mp[s[high]]+=1;
            length=max(length,mp[s[high]]);
            if(high-low+1 - length > k){
                mp[s[low]]-=1;
                low++;
            }
            
            ans=max(ans,high-low+1);
            high++;
        }
return ans;
    }
};