class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& s) {
        int size = s.size();
        vector<vector<string> > ans; 
        unordered_map<string,vector<string>> mp;
        for(int i=0; i<size; i++){
         
            string t = s[i];
            bool cnd = false;
            string temp;
            
            
            
            for(int k=0; k<t.size(); k++){
                
            if(t[k]==' '){
                string temp2;
                temp2.push_back('/');
                k++;
                while(t[k]!='('){
                    temp2.push_back(t[k]);
                    k++;
                }
                string tt;
                    k++;
                    while(t[k]!=')'){
                        tt.push_back(t[k]);
                        k++;
                    }
                    
                    mp[tt].push_back(temp+temp2);
                
                
            }else{
                temp.push_back(t[k]);
                
            }
                // if(t[k]=='(') cnd = true;
                // if(t[k]!='(' && cnd == false){
                //     if(t[k]!=' '){
                //         temp.push_back(t[k]);
                //     }else{
                //         temp.push_back('/');  
                //     }
                // }
                // if(t[k]=='('){
                    // string tt;
                    // k++;
                    // while(t[k]!=')'){
                    //     tt.push_back(t[k]);
                    //     k++;
                    // }
                    // cout<<" tt" <<tt<<endl;
                    // cout<<" temp "<<temp<<endl;
                    // mp[tt].push_back(temp);
                // }
                
                
                
            }
        }
        for(auto a:mp){
            if(a.second.size()>1){
ans.push_back(a.second);
            }
        }
        
        
        
        return ans;
        
    }
};