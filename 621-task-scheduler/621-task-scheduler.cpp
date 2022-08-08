class Solution {
public:
    int leastInterval(vector<char>& v, int k) {
priority_queue<int , vector<int> > pq;
        unordered_map<char,int> mp;
        int n = v.size();
        for(auto a:v){
            mp[a]+=1;
        }
        for(auto a: mp){
            pq.push(a.second);
        }
        
        int ans = 0;
        while(!pq.empty()){
       
             vector<int> temp;
            int tt =0;
            for(int i = 0; i<=k; i++) { 
                tt+=1;
                if(!pq.empty()) {
                    temp.push_back(pq.top());
                    pq.pop();
                }
            }
            
            for(int i = 0; i<temp.size(); i++) {
                if(--temp[i] > 0) pq.push(temp[i]);

            }
            
            if(pq.empty()) ans+=temp.size();
            else ans+=tt;
  
       
        }
             
        return ans;
        
        
        
        
        
    }
};