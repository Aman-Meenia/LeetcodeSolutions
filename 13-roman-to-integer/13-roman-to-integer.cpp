class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        
        int ans = 0 ;
        int n = s.size();
        for(int i=n-1; i>=0; i--){
          int temp = mp[s[i]];
            int k = i-1 ;
            int t=0;
            while(k>=0 && mp[s[k]]<temp){
                t+=mp[s[k]];
                k--;
            }
            i=k+1;
            temp = temp - t;
            ans += temp;
        }
        return ans;
    }
};