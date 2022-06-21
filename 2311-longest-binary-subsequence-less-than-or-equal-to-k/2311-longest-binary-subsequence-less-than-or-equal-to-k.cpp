#define ll long long
class Solution {
public:
    int longestSubsequence(string s, int total) {
        int size=s.size();
        int ans=0;
        int k=0;
        ll sum=0;
        for(int i=size-1; i>=0; i--){
            if(s[i]=='1'){
                sum+=pow(2,k);
            }
            if(sum>total|| k>=30){
                break;
                
            }
            k++;
        }
                ans+=k;

cout<<ans<<endl;
k=size-k;
    
        for(int i=0; i<k; i++){
            if(s[i]=='0'){
              ans++;  
            } 
        }
        return ans;
        
    }
};