class FoodRatings {
public:
map<string,string> mp;
map<string,map<int,set<string> > > st;
map<string,unordered_map<string,int> > ratingfind;
    FoodRatings(vector<string>& food, vector<string>& cus, vector<int>& rating) {
        int size=food.size();
        for(int i=0; i<size; i++){
            mp[food[i]]=cus[i];
            st[cus[i]][rating[i]].insert(food[i]);
            ratingfind[cus[i]][food[i]]=rating[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        string cus=mp[food];
        int rating =ratingfind[cus][food];
        
       auto it=st[cus][rating].find(food);
        st[cus][rating].erase(it);
//          if( food size of ratinf is zero delete )
        int size =st[cus][rating].size();
//       for(auto a:st[cus][rating]){
//           cout<<a<<" ";
//       }cout<<endl;
            if(size==0){
                auto it = st[cus].find(rating);
                st[cus].erase(it);
            }
            
//              update rating 
               st[cus][newRating].insert(food);
        ratingfind[cus][food]=newRating;
    }
    
    string highestRated(string cuisine) {
      
       
 auto foodSet = st[cuisine].rbegin()->second;
        return *foodSet.begin();

    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */