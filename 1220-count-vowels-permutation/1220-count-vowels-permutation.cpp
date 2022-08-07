#define ll long long 
#define mod 1000000007
class Solution {
public:
    map<string,ll> mp;
    vector<string> ans ;
    // string t ;
    int dp[100000][26];
    ll fun(string & t, int n ){
        
        if(n==0){
            ans.push_back(t);
            return 1;
        }
        if(dp[n][t.back()-'a']!=-1) return dp[n][t.back()-'a'];
        
//           string key ;
//         key= to_string(n) + t.back(); 
//         if(mp.find(key)!=mp.end()){
//             cout<<key<<endl;
// return mp[t];
//         }
   ll ans = 0;
           if(t.back()=='a'){
               t.push_back('e');
          ans=(ans%mod + fun(t,n-1)%mod)%mod;           
               t.pop_back();
           }
        else if(t.back()=='e'){
              t.push_back('a');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
               t.push_back('i');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
           }else if(t.back()=='i'){
                  t.push_back('a');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
               t.push_back('e');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
               
               
            t.push_back('o');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
               t.push_back('u');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
               
           }else if(t.back()=='o'){
            t.push_back('i');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();
               t.push_back('u');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();   
               
           }else if(t.back()=='u'){
             t.push_back('a');
    ans=(ans%mod + fun(t,n-1)%mod)%mod;  
               t.pop_back();  
           }
        
        dp[n][t.back()-'a']=ans;
        
        // mp[key]=ans;
        return ans;
        
    }
    
    
    
    int countVowelPermutation(int n) {

memset(dp,-1,sizeof dp);
        // vector<string> s;
        string s ;
        s="aeiou";
        ll ans =0;
        for(auto a:s){
            string t;
            t.push_back(a);
           ans= (ans %mod+ fun(t,n-1) % mod)%mod; 
            // cout<<" mp .size() "<<mp.size()<<endl;
            
        }
        
        return ans; 
    }
};

// a => e
// e => a , i 
// i => a , e , o , u
// o => i , u 
// u => a