class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& v, int k) {
        int n = v.size();
multiset<int> st;
int low = 0;
int high = 0;
vector<double> ans;
while(high<n){
st.insert(v[high]);

if(st.size()==k){

if(k%2==0){
    auto a = next(st.begin(),(k/2)-1);
    auto b = next(st.begin(),k/2);
 double t = ((double)(*a) + (double)(*b) )/2;
    ans.push_back(t);

}else{

    auto a = next(st.begin(),k/2);
    ans.push_back(*a);
}
auto it = st.find(v[low]);
st.erase(it);


low++;
}



high++;



}
// for(auto a:ans){
//     cout<<a<<" ";
// }cout<<endl;

return ans;
    }
};