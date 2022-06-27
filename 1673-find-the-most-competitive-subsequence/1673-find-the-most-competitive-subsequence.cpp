class Solution {
public:
    vector<int> mostCompetitive(vector<int>& v, int k) {
        int n=v.size();
        int minimum=INT_MAX;
        for(int i=0; i<=n-k; i++){
minimum=min(minimum,v[i]);
}
int index=0;
        for(int i=0; i<n; i++){
            if(v[i]==minimum){
                index=i;
                break;
            }
        }
        vector<int> ans;
        // ans.push_back(v[index]);
        stack<int> st;
        k-=1;
        int temp=n-1;
        int tt=k;
        for(int i=index+1; i<n; i++){
            // cout<<"i "<<i<<" v[i]  "<<v[i]<<endl;
            while(st.size()>0 && st.top()>v[i] && temp-i+1>k){
                k+=1;
                
                st.pop();
            }
            if(k>0){
            k-=1;
            }
        if(st.size()<tt){
            
            st.push(v[i]);
        }
        
        }
        while(!st.empty()){
            cout<<st.top()<<endl;
            ans.push_back(st.top());
            st.pop();
        }
        
      ans.push_back(v[index]);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};