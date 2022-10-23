class Solution {
public:
    vector<int> findErrorNums(vector<int>& v) {
        sort(v.begin(),v.end());
        int n = v.size();
    unordered_map<int,int> mp;
        int temp ;
for(auto a:v){
mp[a]+=1;
    if(mp[a]==2){
        temp =a;
    }
}
        for(int i=1; i<=n; i++){
if(mp.find(i)==mp.end()){
    return {temp,i};
}
         
        }
        return v;
    }
};