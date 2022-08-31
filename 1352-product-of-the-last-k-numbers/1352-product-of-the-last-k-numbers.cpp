#define ll long long 

class ProductOfNumbers {
public:
    vector<ll> v;
    vector<ll> t ;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {

        if(v.size()==0){
            
        if(num==0){
                      t.push_back(0) ;

                          v.push_back(1);
        }else{
            v.push_back(num);

        }

        }else if(num==0){
            v.push_back(1);

            int n = v.size();
            t.push_back(n-1);
        }else{

            v.push_back(v.back()*num);
        }
    }
    
    int getProduct(int k) {
        int n = v.size();
        int sum = 1;

        int temp = n - k - 1;
 
            if(temp>=0){
if(t.size()>0 && t.back()>temp){
                    return 0;
                }else{
                    int ans = v.back()/v[temp];
    return ans;
                }
            }else{
                if(t.size()>0 && t.back()>temp){
                    return 0;
                }else{
                    return v.back();
                }
            }
            
        
        

        
        
        
        return sum;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */