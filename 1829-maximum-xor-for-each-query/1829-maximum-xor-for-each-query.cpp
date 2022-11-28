#define ll long long
class Solution {
public:
    string decimaltobinary(int  n , int size){
string s;
    while(n>0){
        int k=n%2;
        s.push_back(k+'0');
        n=n/2;
        
    }
        while(s.size()<size){
            s.push_back('0');
        }
reverse(s.begin(),s.end());
    return s;
}
     
ll binarytodecimal(string &s){
    int size=s.size();
    ll ans=0;
    int k=0;
    for(int i=size-1; i>=0; i--){
int t=s[i]-'0';
ans=ans+(pow(2,k)*t);
k++;
    }
    return ans;
}
    vector<int> getMaximumXor(vector<int>& v, int maximumBit) {
        vector<int> ans;
        int n= v.size();
        int  t = 0;
        for(int i=0; i<n; i++){
            t = t^v[i];
            string temp = decimaltobinary(t, maximumBit);
            int tt = temp.size()-1;
            string tempans;
            for(int i=0; i<maximumBit; i++){
                if(temp[tt]=='0'){
                    tempans.push_back('1');
                }else{
                    tempans.push_back('0');
                }
                tt--;
            }
            reverse(tempans.begin(),tempans.end());
            int ttt=binarytodecimal(tempans);
            ans.push_back(ttt);
            
            
        }
        reverse(ans.begin(),ans.end());
        
        
        return ans;
    }
};