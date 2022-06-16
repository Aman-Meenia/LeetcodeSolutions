class Solution {
public:
    string decimaltobinary(long long  n){
string s;
    while(n>0){
        int k=n%2;
        s.push_back(k+'0');
        n=n/2;
        
    }
        while(s.size()<32){
            s.push_back('0');
        }
reverse(s.begin(),s.end());
    return s;
}
 
    int totalHammingDistance(vector<int>& v) {
        
        vector<string> ans;
        for(auto a:v){
            string t=decimaltobinary(a);
            // cout<<t<<endl;
            ans.push_back(t);
        }
        int totalsum=0;
        
        for(int i=0; i<32; i++){
            int zero=0 , one =0;
            for(int j=0; j<ans.size(); j++){
    
                if(ans[j][i]=='0'){
                    zero++;
                }else{
                    one++;
                }
             
             
            }   totalsum=totalsum+zero*one;
        }
        return totalsum;
    }
};