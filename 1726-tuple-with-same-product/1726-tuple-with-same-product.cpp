class Solution {
public:
    int tupleSameProduct(vector<int>& v) {
        int n = v.size();
        int ans=0;
        unordered_map<int,int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<i; j++){
                if(i==j) continue;
                int t = v[i]*v[j];
            ans+=8*mp[t];
            
                mp[t]+=1;
            }
        }
        // int ans=0;
//         for(auto a:mp){
//             if(a.second>2){
//                 cout<<a.first<<"a.second "<<a.second<<endl;
//                 ans+=8*(a.second-2);
                    
//             }
        // }
        
        return ans;
    }
};