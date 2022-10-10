class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        
        // if size is less than or equal to 1 then it is palidrome
        if(n == 1)
            return "";
        for(int i=0; i<n/2; i++){
            // replace first non  'a' charracter to get lexigraphically smallest word
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
        }
        palindrome[n - 1] = 'b';    // also line 19 & 20 can be use
        
        return palindrome;
    }
};
