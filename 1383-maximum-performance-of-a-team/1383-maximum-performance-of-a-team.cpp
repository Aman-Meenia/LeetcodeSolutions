class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        vector<pair<int,int>>ds;
        for(int i=0;i<n;i++){
			//maintaining a data structure for speed and efficiency.
            ds.push_back({speed[i],efficiency[i]});
        }
		//sorting the data structure according to max efficiency (greedy approch).
        sort(ds.begin(),ds.end(),[](pair<int,int>&a,pair<int,int>&b){
           if(a.second==b.second){
               return a.first>b.first;
           }
           return a.second>b.second; 
        });
		//maintaing a priory queue (min heap) for having maximum output.
        priority_queue<int,vector<int>,greater<int>>pq;
        long long ans=0,cur_speed=0;
        for(auto i:ds){
			//pushing the ith speed in pq.
            pq.push(i.first);
			//adding it to the answer.
            cur_speed+=i.first;
            if(pq.size()>k){ //checking if pq is reached to k elements.
				//subrtacting the element with minimum speed
                cur_speed-=pq.top();
                pq.pop();
            }
			//ans will be maximum of previous ans and sum of speed * min efficiency.
            ans=max(ans,cur_speed*i.second);
        }
        int inf=1e9+7;
		//returning the answer.
        return ans%inf;
    }
};