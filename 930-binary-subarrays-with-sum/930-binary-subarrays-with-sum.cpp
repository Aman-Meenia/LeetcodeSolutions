class Solution {
public:
    int numSubarraysWithSum(vector<int>& v, int target) {
        int n = v.size();
        
        if(target==0){
            int ans = 0;
            int cnt = 0;
            for(int i=0; i<n; i++){
                if(v[i]==0) cnt++;
                else{ 
                    
                ans+=cnt*(cnt+1)/2;
                    cnt=0;
                    }
            }
             ans+=cnt*(cnt+1)/2;
                    cnt=0;

            return ans;
        }
        
        vector<int> left(n,0);
        vector<int> right(n,0);
        vector<int> t;
        for(int i=0; i<n; i++){
            if(i==0){
if(v[i]==0) left[i]=1;
                else t.push_back(i);
            }else{
                if(v[i]==0){
left[i]=left[i-1]+1;
                    
                }else t.push_back(i);
            }
        }
             for(int i=n-1; i>=0; i--){
            if(i==n-1){
if(v[i]==0) right[i]=1;
      
            }else{
                if(v[i]==0){
right[i]=right[i+1]+1;
                    
                }
            }
        }
        
        for(auto a:left){
            cout<<a<<" ";
        }cout<<endl;
        for(auto a:right){
            cout<<a<<" ";
        }cout<<endl;
        int size = t.size();
        int low = 0;
        int high = 0;
        int sum =0;
        int ans = 0;
        while(high<size){
            sum+=v[t[high]];
            if(sum>target){
                while(sum>target){
                    sum-=v[t[low]];
                    low++;
                }
            }
int start = t[low];
            int end = t[high];
            cout<<" start "<<start<<" end "<<end<<endl;
            if(sum==target){
                int t1 = 1;
                int t2 = 1;
            if(start!=0){
                t1+=left[start-1];
            }
            if(end!=n-1){
              t2+=right[end+1];
            }
       ans+=t1*t2;
            }
            high++;
        }
        
        
        
        
        
        
        return ans;
    }
};