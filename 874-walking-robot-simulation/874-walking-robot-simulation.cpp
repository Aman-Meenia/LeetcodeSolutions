
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obs) {
        int ans=0;
        vector<pair<int,int> > moves;
        moves.push_back({0,1});
        moves.push_back({1,0});
        moves.push_back({0,-1});
        moves.push_back({-1,0});
        
        int k=0;
        int x=0;
        int y=0;
        unordered_set<string> st;
        for(auto it:obs){
            string t=to_string(it[0]);
            string t1=to_string(it[1]);
            t=t+" "+t1;
            st.insert(t);
            
        }
        for(auto a:commands){
            if(a==-1){
                k+=1;
                
                
            }else if(a==-2){
                k-=1;
             
            }else{


             
                for(int i=0; i<a; i++){
         
                          x+=moves[k].first;
                    y+=moves[k].second;
        string t=to_string(x);
            string t1=to_string(y);
                    t=t+" "+t1;
                    if(st.find(t)!=st.end()){ 
                        x-=moves[k].first;
                        y-=moves[k].second;
                        break;
                    }
                   
                }
             
                int tempp=x*x + y*y;
                 
                ans=max(ans,tempp);
                
                
            }
            if(k==-1){
                k=3;
            }
            if(k==4){
                k=0;
            }
        }
    return ans;    
    }
};











