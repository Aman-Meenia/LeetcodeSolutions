class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        priority_queue<int,vector<int>,greater<int> > pq;
        int size=v.size();
       for(int i=0 ; i<size; i++){
           pq.push(v[i]);
           if(pq.size()>k){
pq.pop();
           }
       }
        return pq.top();
    }
};