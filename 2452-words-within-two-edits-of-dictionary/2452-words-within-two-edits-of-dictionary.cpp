class Solution {
public:
    vector<string> twoEditWords(vector<string>& q, vector<string>& d){
        int n = q.size();
        int m = d.size();
        vector<string> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                int cnt = 0;
                for(int k=0; k<q[i].size(); k++){
                    if(q[i][k]!=d[j][k]){
                        cnt++;
                    }
                }
                // cout<<"cnt is "<<cnt<<endl;
                // cout<<"S[i]  "<<q[i]<<"  d[j]  "<<d[j]<<endl;
                if(cnt<=2){
                    ans.push_back(q[i]);
                    break;
                }
            }
        }
        return ans;
        
        
    }
};