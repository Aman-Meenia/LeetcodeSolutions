class Solution {
public:
    
    

    
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int> v1;
        vector<int> v2;
        
        for(auto a:queries){
            string t=a;
            sort(t.begin(),t.end());
            char k=t[0];
            int count=0;
          for(auto it:t){
              if(it==k){
                  count++;
              }
          }
            v1.push_back(count);
        } for(auto a:words){
            string t=a;
            sort(t.begin(),t.end());
            char k=t[0];
            int count=0;
          for(auto it:t){
              if(it==k){
                  count++;
              }
          }
            v2.push_back(count);
        }
        vector<int> anss;
        sort(v2.begin(),v2.end());
        for(int i=0; i<v1.size(); i++){
 int target=v1[i];

      int low=0;
            int n=v2.size();
      int high =n-1;
int ans=INT_MAX;
while(low<=high){
    int mid=low+(high-low)/2;
    if(v2[mid]>target){
        ans=mid;
        high=mid-1;
    }else{
low=mid+1;
    }
}
if(ans==INT_MAX){
    int tt=0;
    anss.push_back(tt);
}else{
       int t=v2.size()-ans;
        
             anss.push_back(t); 
            
            }
            // ans.push_back(count);
        }
        return anss;
    }
};