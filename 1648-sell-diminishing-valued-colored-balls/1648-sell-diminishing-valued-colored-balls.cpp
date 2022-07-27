#define ll long long
#define mod 1000000007
class Solution {
public:
    int maxProfit(vector<int>& v, int order) {
        priority_queue<pair<int,int> ,vector<pair<int,int> >> pq;
        unordered_map<int,int> mp;
        for(auto a:v){
           mp[a]+=1; 
         }
        for(auto a:mp){
            pq.push({a.first,a.second});
        }
            ll ans=0;
        while(pq.size()>0&& order>0){
            
            ll a=pq.top().first;
            ll b=pq.top().second;
            pq.pop();
            ll a1=0;
            ll b1=0;
            if(pq.size()>0){
              a1=pq.top().first;
              b1=pq.top().second;
              pq.pop();
            }
            ll temp=a-a1;
//              if we have more order than temp we choose all orders
        cout<<" order "<<order<<" temp*b "<<temp*b<<endl;
            if(order>=temp*b){
              ll sum1=(ll)a*((ll)a+1)/2;
              ll sum2=(ll)a1*((ll)a1+1)/2;
                ll t=sum1-sum2;
                t=(t%mod*b%mod)%mod;
                cout<<" ans sddhfd dfjk "<<t<<endl;
                ans=(ans%mod+t%mod)%mod;
                order-=(temp*b);
                cout<<ans<<endl;
                cout<<" order "<<order<<endl;
            }else{
                cout<<"aman "<<"order"<<order<<endl;
              ll sum1=(ll)a*((ll)a+1)/2;
                // sum1%=mod;
                ll tt=order/b;
                // int taken=b*tt;
                    ll nottaken=order%b;
                ll aa=a-tt;
                
                 ll sum2=(ll)aa*((ll)aa+1)/2;
                
cout<<"sum1 "<<sum1<<" sum2 "<<sum2<<endl;
                ll t=sum1-sum2; 
                cout<<" t t is "<<t<<endl;
                 t=(t%mod*b%mod)%mod;
 cout<<" sum we add is "<<t<<endl;
                ans=(ans%mod+t%mod)%mod;
              cout<<"nottaken "<<nottaken<<endl;
        
                if(nottaken>0){
                     aa-=1;
                    cout<<" cocndition false "<<endl;
                sum1=(ll)aa*((ll)aa+1)/2;
                // sum1%=mod;
                cout<<sum1<<" sum 2 "<<sum2<<endl;

                t=sum2-sum1;
           ll sumnottaken=(nottaken%mod*t%mod)%mod;
                cout<<"sum is "<<sumnottaken<<endl;
       cout<<"ans "<<ans<<" sum "<<sumnottaken<<endl;
                ans=(ans%mod+sumnottaken%mod)%mod;
                }
                
                order=0;
            }
            if(a1>0){
          pq.push({a1,b1+b});      
            }

            
            
            
            
            
        }
        
        
        
      return ans;  
        
        
        
        
        
        
        
        
        
    }
};