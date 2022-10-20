class Solution {
public:
    string intToRoman(int num) {

        int array[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string ans="";
        int size=sizeof(array)/sizeof(int);
        for(int i=0; i<size; i++){
            while(num>=array[i]){
                // ans.push_back(roman[i]);
    ans.append(roman[i]);
                num=num-array[i];
            }
        }
        return ans;
    }
};