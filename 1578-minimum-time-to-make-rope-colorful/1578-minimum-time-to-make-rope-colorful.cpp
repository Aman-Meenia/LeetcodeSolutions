class Solution {
public:
    int minCost(string color, vector<int>& time) {
        priority_queue<int,vector<int> ,greater<int> > q;
        char s=color[0];
        q.push(time[0]);
        int size=color.size();
        int ans=0;
        for(int i=1; i<size; i++){
           if(s==color[i]){
               q.push(time[i]);
           }else{
               while(q.size()>0){
                   if(q.size()>1){
                       ans+=q.top();
                   }
                   q.pop();
               }
               s=color[i];
               q.push(time[i]);
              
               }
             
            
        }
             while(q.size()>0){
                   if(q.size()>1){
                       ans+=q.top();
                   } 
                   q.pop();
               }
        return ans;
    }
};