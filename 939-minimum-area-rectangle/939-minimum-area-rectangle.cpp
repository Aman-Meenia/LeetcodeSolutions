class Solution {
public:
    
    int minAreaRect(vector<vector<int>>& points) {
        int ans=INT_MAX;
        unordered_map<int,unordered_set<int> > mp;
            for(auto it:points){
                mp[it[0]].insert(it[1]);
            }
        int n =points.size();
        
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
              
                if(x1!=x2 && y1!=y2){

                    if(mp.find(x1)!=mp.end()){

                    if(mp[x1].find(y2)!=mp[x1].end()){

                        
                        
                                          if(mp.find(x2)!=mp.end()){
                                                          
                    if(mp[x2].find(y1)!=mp[x2].end()){
                        if(x1<x2){
                            swap(x1,x2);
                        }
                        if(y1<y2){
                            swap(y1,y2);
                        }
                        int area=(x1-x2)*(y1-y2);

                        ans=min(ans,area);
                        
                        
                        
                        
                    }
                    }  
                        
                    }
                    }
                    
                }
            }
        }
        
        if(ans==INT_MAX){
            return 0;
        }
        return ans;
    }
};