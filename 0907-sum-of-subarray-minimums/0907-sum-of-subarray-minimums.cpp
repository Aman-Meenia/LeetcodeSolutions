#define ll long long
#define mod 1000000007
class Solution {
public:
    int sumSubarrayMins(vector<int>& v) {
   ll ans=0;
int n = v.size();
        stack<pair<int,int> > st;
        vector<ll> left(n,0);
        left[0]=1;
            st.push({v[0],1});
        for(int i=1; i<n; i++){
            int temp = 0;
            while(!st.empty() && st.top().first>=v[i]){
                temp +=st.top().second;
                st.pop();
            }
            // cout<<"temp "<<temp<<endl;
            left[i]=temp+1;
            st.push({v[i],temp+1});
        }
        
        // for(auto a:left) cout<<a<<" ";
        // cout<<endl;
        vector<ll> right(n,0);
        right[n-1]=1;
        while(!st.empty()) st.pop();
        st.push({v[n-1],1});
        for(int i=n-2; i>=0; i--){
           int temp = 0; while(!st.empty()&&st.top().first>v[i]){
                temp+=st.top().second;
                st.pop();
            }
            right[i]=temp+1;
            st.push({v[i],temp+1});
        }
        // for(auto a:right) cout<<a<<" ";
        // cout<<endl;

        
        for(int i=0; i<n; i++){
         ll temp =left[i]*right[i];
            temp = temp%mod;
            temp = temp * v[i];
            ans+=temp;
            ans%=mod;
        }
     return ans;   
    }
};