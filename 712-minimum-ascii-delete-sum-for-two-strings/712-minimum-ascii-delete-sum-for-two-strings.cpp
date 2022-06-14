class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        
        int n=s1.size();
        int m=s2.size();
        
        
        vector<vector<int> > v(n+1, vector<int> (m+1,0));
        for(int i=1; i<n+1; i++){
            for(int j=1; j<m+1; j++){
            if(s1[i-1]==s2[j-1]){

                v[i][j]=s1[i-1]+v[i-1][j-1];
            }else{
                v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
            }
        }
    
        int a=0;
        int b=0;
        for(auto it:s1){
            a+=it;
        }for(auto it:s2){
            b+=it;
        }
        int t=v[n][m];
        // cout<<a<<" "<<b<<" "<<t<<endl;
int ans=a-t;
        ans+=b-t;
        return ans;
        
        
    }
};