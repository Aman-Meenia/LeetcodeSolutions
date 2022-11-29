class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<vector<int> > v;
for(int i=0; i<nums.size(); i++){
    for(int j=0; j<nums[i].size(); j++){
        v.push_back({nums[i][j],i+1});
    }
}
        sort(v.begin(),v.end());
        int low = 0;
        int high = 0;
        int size = v.size();
        
        int minans = 0;
        int maxans = 0;
        int diff = INT_MAX;
        unordered_map<int,int> mp;
        // for(auto a:v){
        //     cout<<a[0]<<" "<<a[1]<<endl;
        // }cout<<endl;
int cnt = 0;
        while(high<size){
            
if(mp[v[high][1]]==0){
cnt++;
}
mp[v[high][1]]+=1;
            while(mp[v[low][1]]>1 && low<high){
                mp[v[low][1]]-=1;
                low++;
            }
            
            
// cout<<cnt<<"Cnt is "<<cnt<<endl;
            if(cnt==nums.size()){
                
                int start = v[low][0];
                int end = v[high][0];
                if(end-start<diff){
                    minans=start;
                    maxans=end;
                    diff = end-start;
                }
            }
            
        
           high++; 
            
            
        
        }
        
        
        
        return {minans,maxans};
        
    }
};