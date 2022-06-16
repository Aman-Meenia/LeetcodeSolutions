class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int n=s.size();
        vector<bool>ans;
        vector<vector<int> >V;
vector<int> temp(26,0);
        char tt='a';
for(auto it:s){
    temp[it-tt]+=1;
    V.push_back(temp);
}
        
       for(int p=0; p<queries.size(); p++){ 
        

           int aa=queries[p][0];
             int bb=queries[p][1];
           int k=queries[p][2];
        vector<int> v(26);
         
if(aa>0){
    for(int i=0; i<26; i++){
         v[i]=V[bb][i];
        v[i]=v[i]-V[aa-1][i];
    }
    
}else{
    for(int i=0; i<26; i++){
       
        v[i]=V[bb][i];
    }  
}
   
           
           
           
        int length=(bb-aa)+1;

        if(length%2==0){
            int count=0;
            for(int i=0; i<=25; i++){
                
                if(v[i]%2!=0){
                    count++;
                }
            }
            count=count/2;
            
            if(k>=count){
             ans.push_back(true);
            } else{
                ans.push_back(false);
            }
        }else{
              int count=0;
            for(int i=0; i<=25; i++){
                if(v[i]%2!=0){
                    count++;
                }
            }
            
              count=count/2;
            
            
            if(k>=(count)){
            ans.push_back(true);
            } else{
                ans.push_back(false);
            }
            
        }
        
       }
        
        return ans;
        
    }
};