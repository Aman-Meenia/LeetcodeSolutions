class Solution {
public:
    bool isPossible(vector<int>& v) {
        if(v.size()<3){
            return false;
        }
        int n=v.size();
        // sort(v.begin(),v.end());
        unordered_map<int,int> m;
        for(auto a:v){
            m[a]+=1;
        }
        for(int i=0; i<n; i++){
            
            int temp=v[i];
            if(m.find(v[i])!=m.end()){
                int count=0;
             int  doub=0;
                int pp=0;
                for(int j=temp; j<temp+n; j++){
                    // cout<<" j  "<<j<<endl;
                    if(m.find(j)==m.end()){
                        if(count<3){
                                 // cout<<" count "<<count<<endl;
                            return false;
                        }
                        // cout<<" count "<<count<<endl;
                        break;
                    }
                    count++;
                    if(doub==1){
                        // cout<<m[j]<<" p p "<<pp<<endl;
                        if(m[j]<=pp){
                            break;
                        }
                    }
                    m[j]-=1;
                    // cout<<" count "<<count<<endl;
                    if(count>=3){
                        if(m[j]>0){
                           doub=1;
                            pp=m[j];
                        }
                    }
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