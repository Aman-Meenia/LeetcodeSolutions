class Solution {
public:
    int countVowelStrings(int n) {
        vector<int> t(5,1);
        for(int i=2; i<=n; i++){
            for(int j=3; j>=0; j--){
                t[j]+=t[j+1];
            }
        }
        
        int ans=0;
        for(auto a:t){
            cout<<a<<endl;
            ans+=a;
        }
        
        return ans;
    }
};