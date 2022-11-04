class Solution {
public:
    string reverseVowels(string s) {
        string temp;
        for(auto a:s){
            if(a=='a' || a=='e' ||a=='i' ||a=='u'||a=='o'||a=='A' || a=='E' ||a=='I' ||a=='U'||a=='O'){
                temp.push_back(a);
            }
        }
        reverse(temp.begin(),temp.end());
        int k = 0;
   for(int i=0; i<s.size(); i++){
char a = s[i];
            if(a=='a' || a=='e' ||a=='i' ||a=='u'||a=='o'||a=='A' || a=='E' ||a=='O' ||a=='I' ||a=='U'){
               s[i]=temp[k];
                k++;
            }
        }
        return s;
    }
};