class Solution {
public:
    
    static int cmp(vector<int> & a ,vector<int> &b ){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
    
    
    int numberOfWeakCharacters(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),cmp);
priority_queue<pair<int,int> ,vector<pair<int,int> > , greater<pair<int,int> >> pq;
        int ans = 0;
        for(int i=0; i<v.size(); i++){
            if(pq.empty()){
                pq.push({v[i][1],v[i][0]});
                continue;
            }
            int attack = v[i][0];
            int defence = v[i][1];
            while(!pq.empty() && pq.top().first<defence && pq.top().second){
                pq.pop();
                ans++;
            }
            pq.push({defence,attack});
        }
        return ans;
            
    }
};