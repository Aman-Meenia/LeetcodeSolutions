class Solution {
public:
    int minGroups(vector<vector<int>>& v) {
        sort(v.begin(),v.end());
        priority_queue<int,vector<int> ,greater<int> > pq;
        int n = v.size();
        for(int i=0; i<n; i++){
            if(i==0) pq.push(v[i][1]);
            else{
                if(pq.top()>=v[i][0]){
                    pq.push(v[i][1]);
                }else{
                    pq.pop();
                    pq.push(v[i][1]);
                }
            }
        }
        return pq.size();
    }
};