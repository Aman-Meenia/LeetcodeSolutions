class Solution {
public:
    static int cmp(string &s1, string &s2){
        int n=s1.size();
        int m=s2.size();
        
        return s1.size()<s2.size();
    }
    
    
    
    int longestStrChain(vector<string>& s) {
        sort(s.begin(),s.end(),cmp);
        // for(auto a:s){
        //     cout<<a<<" ";
        // }cout<<endl;
        int n=s.size();
        vector<int> dp(n,1);
        for(int i=0; i<n; i++){
   
            
string temp=s[i];
for(int j=0; j<i; j++){
string t=s[j];
int count=0;
int check=0;
if(temp.size()==(t.size()+1)){
int ttt=0;
// cout<<t<<" temp "<<temp<<endl;
for(int p=0; p<t.size(); p++){
if(t[p] != temp[ttt]   &&   check == 0){
ttt++;
count++;
check=1;
}
if(t[p] != temp[ttt]){
    count++;
}

ttt++;
}

if(count<=1){
dp[i]=max(dp[i],1+dp[j]);
}
}





}
            
        }
         int ans=0;
        for(auto a:dp){

           ans=max(ans,a);
        }

       
        return ans;
        
    }
};