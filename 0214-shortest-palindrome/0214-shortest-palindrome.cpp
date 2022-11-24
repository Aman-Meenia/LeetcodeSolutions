class Solution {
public:
    
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
// int pp =0;
int fun(string &s, int n, int high , int low, int match, int totalsize){
for(int i=high; i>=1; i--){
    // cout<<"totalsize "<<totalsize<<endl;
if(i%2==0){

    // DELETE high  FROM  SECOND MAP  AND INSERT LOW INTO MAP SECOND
if(mp1.count(s[high]) && mp1[s[high]]==mp2[s[high]]) match--;
mp2[s[high]]-=1;
if(mp2[s[high]]==0){
    auto it = mp2.find(s[high]);
    mp2.erase(it);
}else if(mp1.count(s[high])&&mp1[s[high]]==mp2[s[high]]) match++;

if(mp1.count(s[low]) &&mp2.count(s[low]) &&mp1[s[low]]==mp2[s[low]]) match--;
mp2[s[low]]+=1;
if(mp1.count(s[low]) &&mp2.count(s[low]) &&mp1[s[low]]==mp2[s[low]]) match++;

low--;
high--;
totalsize--;
}else{
   // DELETE LOW FROM FIRST MAP AND HIGH FROM SECOND MAP 

    if(mp2.find(s[low])!=mp2.end() && mp1[s[low]]==mp2[s[low]]) match--;
    mp1[s[low]]--;
    if(mp1[s[low]]==0){
        auto it = mp1.find(s[low]);
        mp1.erase(it);
    }else if(mp2.find(s[low])!=mp2.end() && mp1[s[low]]==mp2[s[low]]) match++;
if(mp1.count(s[high]) && mp1[s[high]]==mp2[s[high]]) match--;
mp2[s[high]]-=1;
if(mp2[s[high]]==0){
    auto it = mp2.find(s[high]);
    mp2.erase(it);
}else if(mp1.count(s[high])&&mp1[s[high]]==mp2[s[high]]) match++;

high--;
} 



// cout<<"MATCH "<<match<<endl;

//    cout<<"MAP 1"<<endl;
// for(auto it:mp1){
//     cout<<it.first<<" "<< it.second<<endl;
// }
//      cout<<"MAP 2"<<endl;
// for(auto it:mp2){
//     cout<<it.first<<" "<< it.second<<endl;
// }

if(mp1.size()==match && mp2.size()==match){
       // cout<<s.substr(0,totalsize)<<" Ans  " <<s.substr(totalsize,totalsize)<<endl;
if(i%2==0){
    totalsize++;
    string k = s.substr(totalsize,totalsize);
    reverse(k.begin(),k.end());
    if(s.substr(0,totalsize)==k){
        // cout<<s.substr(0,totalsize)<<endl;
        return totalsize*2;
    }
    totalsize--;

}else{
    string k = s.substr(totalsize+1,totalsize);
    reverse(k.begin(),k.end());
    // cout<<" k is "<<k<<" s is "<<s.substr(0,totalsize)<<endl;
     if(s.substr(0,totalsize)==k){
        // cout<<s.substr(0,totalsize)<<endl;
        return (totalsize*2)+1;
    } 
}

}



if(totalsize<=0){
    break;
}
}
return 1;
}



















bool ispalindrome(string &s){
    int low = 0;
    int high =s.size()-1;
    while(low<=high){
        if(s[low]!=s[high]) return false;
        low++;
        high--;
    }
    return true;
}


    string shortestPalindrome(string s) {
        if(s.size()==0) return "";
      // return s;
        int n = s.size();
        if(ispalindrome(s)) return s;

     
        // unordered_map<char,int> mp1;
        // unordered_map<char,int> mp2;
        
int match=0;
if(n%2==0){

int t = n/2;
for(int i=0; i<t; i++){
    // cout<<s[i]<<" ";
mp1[s[i]]+=1;
}
// cout<<endl;
for(int i=t; i<n; i++){
mp2[s[i]]+=1;
}


}else{
int t = n/2;
for(int i=0; i<t; i++){
mp1[s[i]]+=1;
}
for(int i=t+1; i<n; i++){
mp2[s[i]]+=1;
}
 
    
}
int totalsize=0;

for(auto it:mp1){

    if(mp2[it.first]==it.second) match++;
    totalsize+=it.second;
}
// cout<<"MATCH "<<match<<endl;
// if(match==mp1.size() && match==mp2.size()){
 
//     return s;
// }
vector<char> temp;
for(auto it :mp1){
    // cout<<it.first<<" "<<it.second<<endl;
    if(it.second==0){
        auto a = mp1.find(it.first);
        mp1.erase(a);
    }
}
for(auto a :temp){
    auto it = mp1.find(a);
    mp1.erase(it);
}

temp.clear();
for(auto it :mp2){

    if(it.second==0){
        temp.push_back(it.first);
    }
}
for(auto a :temp){
    auto it = mp2.find(a);
    mp2.erase(it);
}

int mid = n/2;
if(n%2==0) mid=mid-1;
        if(n%2==0)  totalsize-=1;
int Matchlength = fun(s,mid,n-1,mid,match,totalsize);

int tt = n-Matchlength;
string Ans = s.substr(Matchlength,tt);
reverse(Ans.begin(),Ans.end());
// cout<<"Ans is  "<<Ans<<endl;
return Ans+s;
        
    }
};