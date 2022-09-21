class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& v, vector<vector<int>>& q) {
        int sum = 0;
        for(auto a:v){
            if(a%2==0){
sum+=a;
            }
        }
        vector<int> ans;
        int n = q.size();
        for(int i=0; i<n; i++){
            int index = q[i][1];
            int value = q[i][0];
            if(v[index]%2==0){
                sum-=v[index];
            }
            v[index]+=value;
            if(v[index]%2==0){
                sum+=v[index];
            }
            ans.push_back(sum);
            
}
        return ans;
        
        
        
    }
};