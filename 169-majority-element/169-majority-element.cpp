class Solution {
public:
    int majorityElement(vector<int>& v) {
        int ans=v[0];
        int cnt=1;
        int n=v.size();
        for(int i=1; i<n; i++){
            if(ans==v[i]){
                cnt++;
            }else{
                cnt--;
                if(cnt==0){
                    cnt=1;
                    ans=v[i];
                }
            }
        }
        return ans;
    }
};