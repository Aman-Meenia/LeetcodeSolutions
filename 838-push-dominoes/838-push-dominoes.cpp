class Solution {
public:
    string pushDominoes(string s) {
        
        int size = s.size();
        vector<int> left(size, 0);
        vector<int> right(size, 0);
        int cnt = 0;
        for(int i=0; i<size; i++){
            if(s[i]=='R'){
                cnt=1;
            }else if(s[i]=='.'){
                left[i]=cnt;
                if(cnt>0){
                cnt+=1;
                }
            }else{
                cnt=0;
            }
 
        }
        
        
        cnt = 0;
        for(int i=size-1; i>=0; i--){
            if(s[i]=='L'){
                cnt=1;
                 if(s[i]==0){
            }
            }else if(s[i]=='R'){
                cnt=0;
            }else{
                right[i]=cnt;
               if(cnt>0){
                cnt+=1;
                }
            }
           
        }
//         for(auto a:left){
//             cout<<a<<" ";
//         }cout<<endl;
        
//         for(auto a:right){
//             cout<<a<<" ";
//         }cout<<endl;
        string ans=s ;
        for(int i=0; i<size; i++){
            if(left[i]==right[i]){
            
            }else if(left[i]==0){
                ans[i]='L';
            }else if(right[i]==0){
                ans[i]='R';
            }else if(left[i]>right[i] ){

                ans[i]='L';
            }else if(right[i]>left[i]){
                ans[i]='R';
            }
            
            
        }
        
        return ans;
        
    }
};