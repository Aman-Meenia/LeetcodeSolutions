#define ll long long
class Solution {
public:
    long long makeSimilar(vector<int>& nums, vector<int>& target) {
        vector<int> odd;
        vector<int> even;
        vector<int> odd1;
        vector<int> even1;
        
        for(auto a:nums)
        {
            if(a%2){
                odd.push_back(a);
            }else{
even.push_back(a);
            }
            
        }   
    
            for(auto a:target)
        {
            if(a%2){
                odd1.push_back(a);
            }else{
even1.push_back(a);
            }
            
        }   
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        sort(odd1.begin(),odd1.end());
        sort(even1.begin(),even1.end());
        ll ans=0;
        for(int i=0; i<odd.size(); i++){
// cout<<"odd "<<odd[i]<<"odd1 "<<odd1[i]<<endl;
            int t = abs(odd[i]-odd1[i]);
            ans+=t/2;
        }
for(int i=0; i<even.size(); i++){
    // cout<<"evevn "<<even[i]<<"even1 "<<even1[i]<<endl;
            int t = abs(even[i]-even1[i]);
            ans+=t/2;
        }
        
        return ans/2;
        
        
    }
};