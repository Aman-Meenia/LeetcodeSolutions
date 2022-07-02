class Solution {
public:
    
    
    int largestRectangleArea(vector<int>& v) {
        int n=v.size();
       vector<int> left ;
vector<int> right;
stack<pair<int,int> > s;
for(int i=0; i<n; i++){
if(s.empty()){
    left.push_back(-1);
    s.push(make_pair(v[i],i));
}else{
    while(!s.empty()&&s.top().first>=v[i]){
        s.pop();
    }
    if(s.empty()){
    left.push_back(-1);
    s.push(make_pair(v[i],i));
}else{
    left.push_back(s.top().second);
    s.push(make_pair(v[i],i));
}

}
}

// for right 
while(!s.empty()) s.pop();

for(int i=n-1; i>=0; i--){

    if(s.empty()){
        right.push_back(n);
        s.push(make_pair(v[i],i));
    }else {

while(!s.empty() && s.top().first>=v[i]){
    s.pop();
}
 if(s.empty()){
        right.push_back(n);
        s.push(make_pair(v[i],i));
    }else{
        right.push_back(s.top().second);
         s.push(make_pair(v[i],i));
    }


    }
}
reverse(right.begin(),right.end());
int ans=INT_MIN;
for(int i=0; i<n; i++){
    int t=right[i]-left[i]-1;
    t*=v[i];
    ans=max(ans,t);
}
return ans; 
    }
};