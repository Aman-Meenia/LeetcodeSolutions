class Solution {
public:
    int numOfSubarrays(vector<int>& v, int k, int threshold) {
        int ans=0;
        int size=v.size();
        int low=0;
        int high=0;
        int sum=0;
while(high<size){
    sum+=v[high];
        if(high-low+1==k){
            if(sum/k>=threshold){
                ans+=1;
            }
            sum-=v[low];
            low++;
        
        
        }
    high++;
}
        return ans;
        
    }
};