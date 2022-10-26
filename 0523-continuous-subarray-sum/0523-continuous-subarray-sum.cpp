class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     // <modulo,index>
   unordered_map<int,int> m;
        m[0]=-1;
        int sum=0;
        int rem;
        for(int i=0; i<nums.size( ); i++){
            sum=sum+nums[i];
            // cout<<sum<<endl;
          rem=sum%k;
             if(m.find(rem)==m.end()){
                m[rem]= i;
            }else if(i-m[rem] >1){
                return true;
            }
        }
        return false;
    }
};