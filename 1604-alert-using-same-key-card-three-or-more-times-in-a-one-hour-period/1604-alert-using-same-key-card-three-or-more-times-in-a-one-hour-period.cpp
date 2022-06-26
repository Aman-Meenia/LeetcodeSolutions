class Solution {
public:

    vector<string> alertNames(vector<string>& name, vector<string>& time) {
        int n=name.size();
        vector<pair<int,string> > v;
        for(int i=0; i<n; i++){
            int minute=0;
            int hour=0;
            string timeis=time[i];
            hour=hour*10+(timeis[0]-'0');
         hour=hour*10+(timeis[1]-'0');
         minute=minute*10+(timeis[3]-'0');
         minute=minute*10+(timeis[4]-'0');
            
            int t=hour*60;
            t+=minute;
            v.push_back({t,name[i]});
        }
        sort(v.begin(),v.end());
      
        vector<string> ans;
        
        
        unordered_map<string,vector<int> > mp;
        for(auto a:v){
            mp[a.second].push_back(a.first);
        }
        
for(auto it:mp){
    string nameis=it.first;
    vector<int> temp(it.second);
   
    
    int low=0;
    int high=0;
   
    while(high<temp.size()){
        if(temp[high]-temp[low]<=60){
            if(high-low+1>=3){
                ans.push_back(nameis);
                break;
            }
        }else{
            while(temp[high]-temp[low]>60){
                low++;
            }
            
        }
        
        
      high++;  
    }
    
    
    
    
    
}
        
        
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};