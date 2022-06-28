class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& v, int k) {
        int n=v.size();

        priority_queue<pair<double,pair<int,int> >,vector<pair<double,pair<int,int> >>  > pq;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
               double t=double(v[i])/v[j];
                pq.push(make_pair(t,make_pair(v[i],v[j])));
                if(pq.size()>k){
                    pq.pop();
                }
            }
        }
        vector<int> ans;
        ans.push_back(pq.top().second.first);
        ans.push_back(pq.top().second.second);
        return ans;
    }
};