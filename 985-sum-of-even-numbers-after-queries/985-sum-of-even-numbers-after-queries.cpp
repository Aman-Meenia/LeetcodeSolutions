class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& v, vector<vector<int>>& queries) {
        int n=queries.size();
int sum=0;
        for(auto a:v){
            if(a%2==0){
                sum+=a;
            }
        }
        vector<int> ans;
        for(int i=0; i<n; i++){
            int index=queries[i][1];
            int value=queries[i][0];
            if(v[index]%2==0){
                sum-=v[index];
            }
            v[index]=v[index]+value;
            if(v[index]%2==0){
            sum=sum+v[index];
        }
            ans.push_back(sum);
        }
        return ans;
    }
};