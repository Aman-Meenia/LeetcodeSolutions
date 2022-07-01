class Solution {
public:
    int ans=0;
void fun(vector<int>& v, int n, int k ){
     if(k>n){
            ans+=1;
            return ;
        }
    for(int i=1; i<=n; i++){
       
        if(v[i]==0 &&( k%i==0 || i%k==0)){
            v[i]=k;
            
            fun(v,n,k+1);
            v[i]=0;
        }
    }
}
    int countArrangement(int n) {
        vector<int> v(n+1,0);
        fun(v,n,1);
return ans;
    }
};