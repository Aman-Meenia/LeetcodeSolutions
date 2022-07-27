class Solution {
public:
    string getPermutation(int n, int k) {
        
        vector<int> v ;
        int total=1;
        for(int i=1; i<=n; i++){
            v.push_back(i);
            if(i<n){
                total=total*i;
            }
        }
        string ans;
        k-=1;
        while(v.size()>0){
            // cout<<k<<" a is "<<total<<endl;
            int index =k/total;
            ans.push_back(v[index]+'0');
            v.erase(v.begin()+index);
            if(v.size()==0) break;
                k=k%total;
                total/=v.size();

        }
        
        
    return ans;    
    }
};