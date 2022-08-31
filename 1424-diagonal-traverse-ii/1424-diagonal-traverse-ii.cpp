class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& v) {
        if(v.size()==0) return {};
        vector<int> ans;
        int n = v.size();
        queue<pair<int,int>> q;
        q.push({0,0});
        while(!q.empty()){
            int size = q.size();
            
            for(int i=0; i<size; i++){
                int a = q.front().first;
                int b = q.front().second;
                ans.push_back(v[a][b]);
                q.pop();
                int x = a+1;
                int y = b;
                int x1 = a;
                int y1 = b+1;
                if(x>=0 && x<n && y==0 ){
                    q.push({x,y});
                }
                if(x1>=0 && x1<n && y1>=0 && y1<v[x1].size()){
                    q.push({x1,y1});  
                }
                
            }
            
            
        }
        
        
        
        
        return ans;
        
        
        
        
        
    }
};