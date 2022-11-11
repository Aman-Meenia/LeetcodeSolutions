class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int ans =1;
        int temp=nums[0];
        int n = nums.size();
        int low = 1;
        for(int i=1; i<n; i++){
            if(temp!=nums[i]){
                ans++;
                temp = nums[i];
                nums[low]=nums[i];
                low++;
            }
        }
        return ans;
        
    }
};