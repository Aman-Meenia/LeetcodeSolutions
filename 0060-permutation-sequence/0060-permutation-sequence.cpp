class Solution {
public:
    string getPermutation(int n, int k) {
//         string temp;
//         for(int i=1; i<=n; i++){
//             temp.push_back(i+'0');
//         }
//       vector<string> ans;  
// do{
//     ans.push_back(temp);
    
// }while(next_permutation(temp.begin(),temp.end()));
//         sort(ans.begin(),ans.end());
//         return ans[k-1];
        
        vector<int> v(n);
        for(int i=0; i<n; i++) v[i]=i+1;
            
        int total=1;
        for(int i=1; i<n; i++){
            total=total*i;
        }
        k-=1;
        string ans;
        while(true){
            ans.push_back(v[k/total]+'0');
            v.erase(v.begin()+k/total);
            if(v.size()==0) break;
            k=k%total;
            total=total/v.size();
        }        
        return ans;

    }
};