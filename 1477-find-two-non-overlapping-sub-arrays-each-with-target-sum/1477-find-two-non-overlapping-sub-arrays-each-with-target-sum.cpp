class Solution {
public:
    
    int minSumOfLengths(vector<int>& v, int target) {
        
        int n = v.size();
        unordered_map<int,int> mp;
        mp[0]=-1;
        int sum = 0;
        
        
        vector<int> start;
        vector<int> end;
        for(int i=0; i<n; i++){
            sum+=v[i];
            int temp = sum-target;
            if(mp.find(temp)!=mp.end()){
                int k = i-mp[temp];
                start.push_back(i-k+1);
                end.push_back(i);
            }
            mp[sum]=i;
        }
        
        int ans = INT_MAX;
       
        int size = start.size();
        vector<int> right(size);
        for(int i=size-1; i>=0; i--){
            if(i==size-1){
                right[i]=end[i]-start[i]+1;
            }else{
                right[i]=min(right[i+1],(end[i]-start[i]+1));
            }
        }

        for(int i=0; i<size; i++){
            int temp = end[i]-start[i]+1;
            int t = end[i];
auto it = upper_bound(start.begin()+i,start.end(),t)-start.begin();
            if(it==size){
                
            }else{
                temp+=right[it];    
                ans = min(ans,temp);
            }
        }
        
        return ans==INT_MAX ? -1 :ans;
        
        
    }
};