class Solution {
public:
    string longestPalindrome(string s) {
int size=s.size();
int start=0;
int end=0;
int length=1;
// EVEN LENGTH

for(int i=0; i<size; i++) {

	int l=i;
	int r=i+1;
	while(l>=0 && r<size){
		if(s[l]==s[r]){
			l--;
			r++;
		}else{
			break;
		}
	}
	int len=r-l-1;
	if(len>length){
		length=len;
		start=l+1;
		end=r-1;
	}
}

// ODD LENGTH
	for(int i=0; i<size; i++) {

	int l=i;
	int r=i;
	while(l>=0 && r<size){
		if(s[l]==s[r]){
			l--;
			r++;
		}else{
			break;
		}
	}
	int len=r-l-1;
	if(len>length){
		length=len;
		start=l+1;
		end=r-1;
	}
}
string ans =s.substr(start,length);
        return ans;
    }
};