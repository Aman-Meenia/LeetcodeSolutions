class Solution {
public:
    int minPartitions(string s) {
        int ans=0;
      for(auto a:s){
          int t=a-'0';
          ans=max(ans,t);
      }
        return ans;
    }
};