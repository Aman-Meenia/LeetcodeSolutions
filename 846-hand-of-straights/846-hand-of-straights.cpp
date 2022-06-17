class Solution {
public:
    bool isNStraightHand(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int n=v.size();
        if(n%k!=0){
            return false;
            
        }
        unordered_map<int,int> m;
        for(auto a:v){
            m[a]+=1;
        }
        for(int i=0; i<n; i++){
            int temp=v[i];
            if(m.find(temp)!=m.end()){
                
                for(int j=temp; j<temp+k; j++){
                    if(m.find(j)==m.end()){
                        return false;
                    }
                    
                    m[j]-=1;
                    if(m[j]==0){
                        auto it=m.find(j);
                        m.erase(it);
                    }
                    
                    
                }
                
                
                
            }
            
        }
        return true;
        
    }
};