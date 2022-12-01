class Solution {
public:
    int longestWPI(vector<int>& v) {
        unordered_map<int,int> mp;
    
        vector<int> v1;

        int n = v.size();
        int ans = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
           
            if(v[i]>8){
                sum+=1;
            }else{
                sum-=1;
            }

            if(sum>0){
                ans= i+1;
            }else if(sum<=0 &&v1.size()>0){
                int k = -sum;
               
                
                auto it =upper_bound(v1.begin(),v1.end(),k)-v1.begin();
               
                if(it!=v1.size()){
                    int low= mp[v1[it]];
ans = max(ans , i-low);
                }
            }
            if(sum<0){
                v1.push_back(-sum);
           
            }
            if(mp.find(-sum)==mp.end()){
                mp[-sum]=i;
            }
        }
      
        return ans;
    }
};