#define ll long long
class Solution {
public:
    long long totalCost(vector<int>& v, int k, int candidates) {
int n = v.size();
        int low = 0;
int high = n-1;
        int size=v.size();
        ll ans = 0;
        priority_queue<int,vector<int>,greater<int> >pq1;
       priority_queue<int,vector<int>,greater<int> >pq2;
        while(k>0){
        
        if(low<=high){
            
            while(low<=high &&pq1.size()<candidates){
               
pq1.push(v[low]);
                low++;
            }

            while(low<=high &&pq2.size()<candidates){
   
                pq2.push(v[high]);
                high--;
            }
            if(pq1.size()>0 && pq2.size()>0){
                int a = pq1.top();
                int b = pq2.top();
                if(a<=b){
                    pq1.pop();
            
                    ans+=a;
                }else{
                    ans+=b;
               
                    pq2.pop();
                }
            }else if(pq1.size()>0){
                     int a = pq1.top();

                ans+=a;
                    pq1.pop();
                
            }else{
             int b = pq2.top();
                ans+=b;
                    pq2.pop();

                
            }
            
            
        }else if(low>high){
                
                while(k>0){
                     if(pq1.size()>0 && pq2.size()>0){
                int a = pq1.top();
                int b = pq2.top();
                if(a<=b){
                    pq1.pop();
                    ans+=a;
                }else{
                    ans+=b;
                    pq2.pop();
                }
            }else if(pq1.size()>0){
                     int a = pq1.top();
                ans+=a;
                    pq1.pop();
                
            }else{
             int a = pq2.top();
                ans+=a;
                    pq2.pop();
                
            }
                  
                    k--;
                }
           
            
                return ans;
        }
         
            k--;
        }
        
        
        
        
        return ans;
        
    }
};