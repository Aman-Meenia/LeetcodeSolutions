class Solution {
public:
    int numberOfSubstrings(string s) {
        
        
        int n = s.size();
        int low = 0;
        int high = 0;
        int size = n;
        unordered_map<char,int> mp;
        int ans = 0;
        while(high<size){
           mp[s[high]]+=1;
           
while(mp.size()>=3 && low<high){
    ans+=n-high;
    mp[s[low]]-=1;

    if(mp[s[low]]==0){
              auto it=mp.find(s[low]);
                    mp.erase(it);
                      
    }

    low++;
}
          high++;  
            
        }
        return ans;
    }
};