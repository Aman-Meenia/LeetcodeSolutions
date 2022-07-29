class Solution {
public:
    int minCut(string s) {
        int size=s.size();
int dp[size][size];
memset(dp,0,sizeof(dp));

for(int k=0; k<size; k++){
	for(int i=0,j=k; j<size; i++,j++){
		if(k==0){
dp[i][j]=true;
		}else if(k==1){
if(s[i]==s[j]){
	dp[i][j]=true;
}else{
	dp[i][j]=false;
}
		}else{
if(s[i]==s[j]&&dp[i+1][j-1]==1){
	dp[i][j]=true;
		}else{
	dp[i][j]=false;
}
	}
}


}
// for(int i=0; i<size; i++){
// 	for(int j=0; j<size; j++){
// 		cout<< dp[i][j]<<"   ";
// 	}cout<<endl;
// }
        
 vector<int> dp1(size,INT_MAX);    
          dp1[0] = 0;
        
          for(int j=1;j<size;j++)
            {
              if(dp[0][j]) 
                  dp1[j] = 0;
              
              else{
                for(int i=j ;i>=1;i--)
                {
                    if(dp[i][j])
                    {
                        dp1[j] = min(dp1[j],1+dp1[i-1]);
                    }
                }
              }
            }

   
        return dp1[size-1];



    }
};