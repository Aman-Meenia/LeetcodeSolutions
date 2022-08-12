// class compare{
//   public:
//         bool operator()(int a, int b){
//             string s1 = to_string(a), s2=to_string(b);
//             return s1+s2 > s2+s1;
//         }
// };
class Solution {
public:
    
static int cmp(int a, int b){
     string s1 = to_string(a);
    string s2=to_string(b);
    if(a<b){
        swap(a,b);
    }
    if(s1+s2>s2+s1){
        return a>b;
    }else{
        return a<b;
    }
}
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(), cmp);
        string s="";
        for(auto &n : nums) s+=to_string(n);
        if(nums[0]==0) return "0";
        return s;
    }
};