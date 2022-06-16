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
    int hammingDistance(int x, int y) {
        string s1=decimaltobinary(x);
        string s2=decimaltobinary(y);
        int ans=0;
        for(int i=0; i<32; i++){
            if(s1[i]!=s2[i]){
                ans++;
            }
        }
        return ans;
    }
};