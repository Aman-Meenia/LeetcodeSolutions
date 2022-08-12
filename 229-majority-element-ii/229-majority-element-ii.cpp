class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        int n = v.size();
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0; i<n; i++){
        //             cout<<" num1 "<<num1<<" cnt1 "<<cnt1<<endl;
        // cout<<"num2 "<<num2<<" cnt2 "<<cnt2<<endl;
            if(num1==INT_MAX && v[i]!=num2){
                num1=v[i];
                    cnt1++;
            }else if(num2==INT_MAX&&v[i]!=num1){
                num2=v[i];
                      cnt2++;
            }else if(num1==v[i]){
                cnt1++;
           
            }else if(num2==v[i]){
                cnt2++;
            }else {
                cnt1--;
                cnt2--;
                if(cnt1==0){
                    num1=INT_MAX;
                }
                if(cnt2==0){
                    num2=INT_MAX;
                }
            }
            
            
        }
        cnt1=0;
        cnt2=0;
        for(int i=0; i<n; i++){
            if(v[i]==num1) cnt1++;
            else if(v[i]==num2) cnt2++;
        }
        cout<<" num1 "<<num1<<" cnt1 "<<cnt1<<endl;
        cout<<"num2 "<<num2<<" cnt2 "<<cnt2<<endl;
        if(cnt1 >n/3&& cnt2>n/3){
            return {num1,num2};
        }else if(cnt1>n/3){
            return {num1};
        }else if(cnt2>n/3){
            return {num2};
        }
        
        
       return {}; 
        
        
        
        
    }
};