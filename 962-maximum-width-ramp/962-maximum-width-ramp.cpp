class Solution {
public:
    
    int  binarysearch(vector<vector<int> > & v , int target){
        int ans = INT_MAX;
        int n = v.size();
        // vector<int> v(t.begin(),t.end());
        // int low = 0;
        // int high = n-1;
        // while(low<=high){
        //     swap(v[low],v[high]);
        //     low++;
        //     high--;
        // }
       int  low = 0;
      int   high = n-1;
        while(low<=high){
            int mid = low +(high-low)/2;
            
            if(v[mid][0]==target){
                return v[mid][1]; 
            }else if(target<v[mid][0]){
                low=mid+1;
            }else{
                ans = v[mid][1];
                high=mid-1;
            }
        }
        
        return ans;
        
        
    }
    
    int maxWidthRamp(vector<int>& v) {
        int ans = 0;
        int n =v.size();
        // stack<pair<int,int> >st;
        vector<vector<int> > t;
        t.push_back({v[0],0});
        for(int i=0; i<n; i++){

            // int index = 489;
            int index = binarysearch(t,v[i]);
            if(index!=INT_MAX){
                ans = max(ans,i-index);
            }
                
                
                
                if(v[i]<t.back()[0]){
                t.push_back({v[i],i});
            }
        }
        
        
        return ans;
    }
};