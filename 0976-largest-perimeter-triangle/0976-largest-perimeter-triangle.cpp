class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int n=nums.size();  
        for(int i=n-1; i>=2; i--)
		    if(isTriangle(nums[i], nums[i-1], nums[i-2])) 
                return nums[i]+nums[i-1]+nums[i-2];
        return 0;
    }

    bool isTriangle(int a, int b, int c) {
        return a+b>c && a+c>b && b+c>a;
    }
};