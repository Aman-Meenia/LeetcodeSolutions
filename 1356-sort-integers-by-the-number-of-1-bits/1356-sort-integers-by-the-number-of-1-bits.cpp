class Solution {
public:
    int decimaltobinary(int n ){
       int count=0;

        while(n>0){
            if(n%2==0){

            }else{
                count++;

            }
            n=n/2;
        }
        return count;
    }
    static int cmp(vector<int> & a, vector<int> &b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]<b[0];        
    }
    vector<int> sortByBits(vector<int>& arr) {
vector<int> ans;

        vector<vector<int> > v;
        for(auto a:arr){
            int t=decimaltobinary(a);
            v.push_back({t,a});

        }
        
        sort(v.begin(),v.end(),cmp);
        for(auto a:v){
            ans.push_back(a[1]);
        }
        return ans;
    }
};