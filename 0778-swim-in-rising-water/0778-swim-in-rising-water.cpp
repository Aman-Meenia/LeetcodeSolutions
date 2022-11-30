class Solution {
public:
    int swimInWater(vector<vector<int>>& v) {
        // queue<pair<int,pair<int,int> >> q;
        priority_queue<pair<int,pair<int,int>>,vector< pair<int,pair<int,int>>> ,greater<pair<int,pair<int,int>>>>  q;
        q.push(make_pair(v[0][0],make_pair(0,0)));
        int ans = INT_MAX;
        int n = v.size();
        int m = v[0].size();
        int array1[4]={0,0,1,-1};
        int array2[4]={1,-1,0,0};
        vector<vector<int> >dp(n,vector<int>(m,INT_MAX));
        dp[0][0]=v[0][0];
        while(!q.empty()){
int a = q.top().second.first;
            int b = q.top().second.second;
            int val = q.top().first;
            if(a==n-1 && b==m-1){
                ans=min(ans,val);
            }
            q.pop();
            
            for(int k=0; k<4; k++){
                int x = a+array1[k];
                int y = b+array2[k];
                  
    if(x>=0 && y>=0 && x<n && y<m && dp[x][y]>max(v[x][y],val)){

        dp[x][y]=max(v[x][y],val);
        
        if(x==n-1 && y == m-1){
            ans = min(ans,dp[x][y]);
            // cout<<"Ans "<<ans<<endl;
            // break;
        }
        
        q.push(make_pair(dp[x][y],make_pair(x,y)));
    }
                
                
            }
            
            
            
        }
        // for(auto a:dp){
        //     for(auto b:a){
        //         cout<<b<<" ";
        //     }cout<<endl;
        // }
        
        
        
        return ans;
    }
};