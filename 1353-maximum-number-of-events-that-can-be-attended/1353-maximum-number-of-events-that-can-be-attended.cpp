class Solution {
public:
    int maxEvents(vector<vector<int>>& v) {
        
        int n = v.size();
       sort(v.begin(),v.end()); priority_queue<int,vector<int>,greater<int> > pq;
        int ans = 0;
        int i=0;
        for(int k=1; k<=100000; k++){
            
            while(!pq.empty()&&pq.top()<k) {
                pq.pop();
            }
            while(i<n&&v[i][0]==k){
                pq.push(v[i][1]);
                i++;
            }
            if(!pq.empty()){
                pq.pop();
                ans++;
            }
            if(i==n&&pq.empty()){
                return ans;
            }
            
            
            
            
        }
        return ans;
        
    }
};