class Solution {
public:
    int maximumUnits(vector<vector<int>>& box, int trucksize) {
        int ans=0;
vector<vector<int> > v;
        for(auto a:box){
            v.push_back({a[1],a[0]});
}
        sort(v.begin(),v.end());
 reverse(v.begin(),v.end());
        // for(auto a:v){
        //     cout<<a[0]<<" "<<a[1]<<endl;
        // }cout<<endl;
        for(int i=0; i<v.size(); i++){
            int a=v[i][0];
            int b=v[i][1];
            if(trucksize>=b){
                int temp=a*b;
                ans+=temp;
                trucksize-=b;
                
            }else{
              int temp=trucksize*a;
                ans+=temp;
return ans;
            }
        }
        
return ans;
    }
};