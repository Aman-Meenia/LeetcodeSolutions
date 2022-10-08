class Solution {
public:

    
    int threeSumClosest(vector<int>& v, int target) {
        int ans = 1e7;
        sort(v.begin(),v.end());
        int n = v.size();
        for(int i=0; i<n-2; i++){
            int low = i+1;
            int high = n-1;
            while(low<high){
                int total=v[i]+v[low]+v[high];
                if(total<target){
                    low++;
                }else{
                    high--;
                }
                if(total==target) return target;
                if(abs(total-target)<abs(ans-target)) ans = total;
            }
            
        }
        return ans;
    }
};