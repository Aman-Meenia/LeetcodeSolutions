class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     
        vector<int> v;
       for(auto a:nums1){
           v.push_back(a);
       } 
           for(auto a:nums2){
           v.push_back(a);
       } 
        
        sort(v.begin(),v.end());
           int size = v.size();
        if(v.size()%2==0){
            cout<<"aman "<<endl;
            double t=v[size/2];
            t+=v[(size/2)-1];
            t/=2;
            return t;
        }

        return v[size/2];
    }
};