class Solution {
public:
    int furthestBuilding(vector<int>& v, int bricks, int ladders) {
        vector<int> temp;
        int n=v.size();
        priority_queue<int,vector<int> > pq;
        for(int i=0; i<n-1; i++){
            if(v[i]>v[i+1]){
                temp.push_back(0);
            }else{
             int tt= v[i+1]-v[i];
                     temp.push_back(tt);
            }
        }
        // for(auto a:temp){
        //     cout<<a<<" ";
        // }cout<<endl;
        int ans=0;
        for(int i=0; i<temp.size(); i++){
            if(bricks>=temp[i]){
                // cout<<" bricks "<<bricks <<"  "<<temp[i]<<endl;
                pq.push(temp[i]);
                bricks-=temp[i];
                ans++;
                // cout<<" i "<<i<<endl;
            }else if(ladders>0){
                int t1=temp[i];

                if(pq.size()>0){    
                  
                    int t2=pq.top();

                if(t2>t1){
                           pq.pop();
                    pq.push(t1);
                    bricks+=(t2-t1);
                }
           
            
                   }
                     ans++;
                ladders-=1;
                
            }else{
                break;
            }
            
            
            
        }
        return ans;
        
    }
};