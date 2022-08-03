class Solution {
public:
    int minSubArrayLen(int target, vector<int>& v) {
        int low = 0;
        int high = 0;
        int sum = 0;
        int ans = INT_MAX;
        int size = v.size();
        while(high<size){
            sum+=v[high];
            
while(sum>=target){
    ans=min(ans,high-low+1);
    sum-=v[low];
     low++;
}
            high++;
            
        }
        if(ans==INT_MAX) return 0;
            return ans;
    }
};