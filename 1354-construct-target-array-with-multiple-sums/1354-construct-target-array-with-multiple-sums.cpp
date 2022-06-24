class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<int> pq;
        long long sum=0;
        for(auto it: target) {
            sum+=it;
            pq.push(it);
        }
        while(pq.top()!=1) {
            int x=pq.top();
            pq.pop();
            sum-=x;
            if(sum==0||sum>=x)
                return false;
            int num=x%sum; //using mod to avoid TLE for test cases with large diff amoung the elements
            if(sum!=1&&num==0)  //this condition is necessary for arrays with two elements
                return false;
            sum+=num;
            pq.push(num);
        }
        return true;
    }
};