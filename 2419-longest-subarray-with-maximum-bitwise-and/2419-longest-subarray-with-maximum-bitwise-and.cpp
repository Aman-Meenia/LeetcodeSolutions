class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maximum = nums[0];
        int cnt = 0;
        int ans=0;
        int n = nums.size();
        for(auto a:nums) maximum = max(maximum,a);
       for(int i=0; i<n; i++){
if(maximum == nums[i]){
    cnt++;
}else{
    ans = max(ans,cnt);
cnt = 0;
}
       } 
        ans= max(ans,cnt);
        return ans;
    }
};