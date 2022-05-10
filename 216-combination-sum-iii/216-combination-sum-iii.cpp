class Solution {
public:
    vector<int> temp;
vector<vector<int> > ans;
  void fun(int k , int target , int ct, vector<int> &v, int i){
    if(ct==k){
        if(target==0){
            ans.push_back(temp);
        }
        return;
    }
    if(ct>k||i>8) return ;
if(v[i]<=target){
    temp.push_back(v[i]);

    fun(k , target-v[i], ct+1 , v , i+1 );

    temp.pop_back();
        fun(k , target, ct, v, i+1  );
}else{
    fun(k , target, ct, v, i +1 );
}

  }


    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> v(9);
for(int i=0; i<9; i++){
    v[i]=i+1;
}
        fun(k, n , 0 , v , 0  );
       return ans; 
    }
};