class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = gas.size();
        int profit= INT_MIN;
        int start = INT_MAX;
//          we can start form that point in which gas[i]>= start[i] but after that profit is also greater that equal to cost[i] 
//          if not we cannot reach again that point so we start from another point 
        for(int i=0; i<n; i++){
            if(profit!=INT_MIN && profit+gas[i]>=cost[i]){

            profit+=gas[i];
                profit-=cost[i];
            } else if(gas[i]>=cost[i]){

                start = i;
                profit=gas[i]-cost[i];
            }else{

             profit= INT_MIN;
             start = INT_MAX; 
            }
        }

        
        if(start==INT_MAX) return -1;
       int k=start+1;
        profit=gas[start]-cost[start];
while(k%n!=start){
    int index = k % n;
    profit+=gas[index];
    if(cost[index]>profit){
        return -1;
    }
    profit-=cost[index];
    
    k++;
}
        
        
        
        return start;
        
        
        
    }
};