class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> mp;
        
        
        vector<int> ans;
        int n = s.size();
        int size = words[0].size();
        if(s.size()<size*words.size()) return ans;
        for(int i=0; i<=n-(size*words.size()); i++){
            for(auto a:words){
            mp[a]+=1;
        }
            
            string temp = s.substr(i,size);
            // cout<<" temp "<<temp<<endl;
            if(mp.find(temp)!=mp.end()){
                // cout<<" i "<<i<<endl;
                mp[temp]-=1;
               int kk= words.size()-1;
                int index = i+size;
                int cnd = true;
                while(kk>0){
                    kk--;
                   string tt = s.substr(index,size);
                    // cout<<" tt "<<tt<<endl;
                    if(mp.find(tt)!=mp.end()){
                        if(mp[tt]>0){
                            mp[tt]-=1;
                        }else{
                           cnd = false;
                        break; 
                        }
                    }else{
                        cnd = false;
                        break;
                        
                    }
                    index+=size;
                }
                if(cnd==false){
                    
                }else{
                    bool cnd1= true;
                    for(auto a: mp){
                        if(a.second>=1){
                            cnd1 =false;
                            break;
                        }
                    }
                    if(cnd1==true){
                        ans.push_back(i);

                    }
                    
                    
                    
                }

                
                
            }
            mp.clear();
            
            
            
        }
        
        
       return ans; 
    }
};