class Solution {
public:
    int longestWPI(vector<int>& v) {
        unordered_map<int,int> mp;
        cout<<v.size()<<endl;
        // for(auto a:v) cout<<a<<" ";
        // cout<<endl;
        vector<int> v1;

        int n = v.size();
        int ans = 0;
        int sum = 0;
        for(int i=0; i<n; i++){
            // for(auto it :v1){
            //     cout<<it<<" ";
            // }cout<<endl;
            if(v[i]>8){
                sum+=1;
            }else{
                sum-=1;
            }
// cout<<"Sum is. "<<sum<<endl;
            if(sum>0){
                ans= i+1;
            }else if(sum<=0 &&v1.size()>0){
                int k = -sum;
               
                
                auto it =upper_bound(v1.begin(),v1.end(),k)-v1.begin();
                // cout<<"K  "<<k<<"  INDEXIS "<<it<<endl;
                if(it==v1.size()){
                    cout<<"END "<<endl;
                }else{
                    int low= mp[v1[it]];
// cout<<" index is "<<low<<endl;
ans = max(ans , i-low);
                }
            }
            if(sum<0){
                v1.push_back(-sum);
           
            }
            if(mp.find(-sum)==mp.end()){
                mp[-sum]=i;
            }
        }
        auto it =upper_bound(v1.begin(),v1.end(),3)-v1.begin();
cout<<it<<endl;
        return ans;
    }
};