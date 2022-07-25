class Solution {
public:
    
     int fun(vector<int> & v){
     int n = v.size();

        vector<int> left(n,-1);
        vector<int> right(n,n);
        stack<pair<int,int> > st;
        for(int i=0; i<n; i++){
            
            while(!st.empty() && st.top().first>=v[i]){
                st.pop();
            }
            if(!st.empty()){
                left[i]=st.top().second;
            }
            st.push({v[i],i});
            
            
        }
        while(!st.empty()) st.pop();
          for(int i=n-1; i>=0; i--){
            
            while(!st.empty() && st.top().first>=v[i]){
                st.pop();
            }
            if(!st.empty()){
                right[i]=st.top().second;
            }
            st.push({v[i],i});
            
            
        }

    
int ans=0;
for(int i=0; i<n; i++){
    int temp=right[i]-left[i]-1;
    temp*=v[i];
    ans=max(ans,temp);
}
return ans;


    
    }
    
    
    
    
    
    
    int maximalRectangle(vector<vector<char>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<int> temp(m);
        int ans=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(v[i][j]=='0'){
               temp[j]=0;
                }else{
                    temp[j]+=1;
                }
            }

          
            ans=max(ans,fun(temp));
        }
        return ans;
    }
};