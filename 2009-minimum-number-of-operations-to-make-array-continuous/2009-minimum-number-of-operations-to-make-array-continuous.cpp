class Solution {
public:
    int minOperations(vector<int>&v ) {
        int n = v.size();
        unordered_set<int> st;
        for(auto a:v){
            st.insert(a);
        }
        int ans = 1;
        v.clear();
        for(auto a:st){
            v.push_back(a);
        }
      
      sort(v.begin(),v.end());
   int low = 0;
        int high = 0;
        while(high<v.size()){

	if(v[high]>n-1+v[low]){
		
		low++;

	}

        ans = max(ans, high-low+1);
        high++;
        }

        return n - ans;
    }
};