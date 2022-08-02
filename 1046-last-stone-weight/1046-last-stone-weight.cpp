class Solution {
public:
    int lastStoneWeight(vector<int>& v) {
        priority_queue<int> q;
        for(auto a:v){
q.push(a);
        }
        
        while(q.size()>1){
            int a = q.top();
        q.pop();
            int b = q.top();
            q.pop();
            if(a!=b){
              q.push(a-b);  
            }
        }
        if(q.size()==0) return 0;
        return q.top();
        
    }
};