class Solution {
public:
    int bagOfTokensScore(vector<int>& v, int power) {
        int ans = 0;
        sort(v.begin(),v.end());
        int n = v.size();
        if(n==0) return 0;
        int low = 0;
        
        int high = n-1;
        if(v[low]<=power){
        
            ans++;
            power-=v[low];
            
                low++;
        }
        int t = ans ;
        
while(low<=high){
    if(v[low]<=power){
        t++;
        ans = max(ans,t);
        power-=v[low];
        low++;
    }else if(t>0){
        t--;
        power+=v[high];
        high--;
    }else{
        break;
    }
}
        return ans;
        
        
        
        
    }
};