#define ll long long 
class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string t = to_string(n);
        sort(t.begin(),t.end());
        unordered_map<int,int> mp;
        ll temp = 1;
        int i=1;
        while(temp<=1e9){
         mp[temp]+=1;
            temp = pow(2,i);
            i++;
        }
do{
    if(t[0]=='0') continue;
    ll k =stoll(t);
    if(mp.find(k)!=mp.end()) return true;
}while(next_permutation(t.begin(),t.end()));
        return false;
    }
};