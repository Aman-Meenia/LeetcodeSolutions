class Solution {
public:
    int getLengthOfOptimalCompression(string s, int k) {
       
        memset(mem, -1, sizeof mem);
        ln = s.length();
        
        
        // populate the prefix sum array for each character       
        for(int i = 'a' -'a'; i<= 'z'-'a';i++)
            prefSum[i] = vector<int>(ln, 0);
        for(int i = 0 ; i < ln; i++){
            prefSum[s[i]-'a'][i] = 1;
        }
        
        for(int i = 0 ; i<= 'z'-'a';i++)
        {
            for(int j = 1 ; j < ln; j++){
                prefSum[i][j] += prefSum[i][j-1];
            }
        }

        return dp(0, ln, k, s);
    }
	
    int mem[101][101][101];
    int ln;
    vector<int> prefSum[27];
	
    int dp(int idx, int chainStart, int k, string &s){
        if(idx == s.length())
        {
            // base case: get the number of current characters between last chain start and the end 
            // of the string
            
            if(chainStart == ln) // this means that all characters have been skipped, return 0
                return 0;
            
            int cfreq = prefSum[s[chainStart]-'a'][idx-1] - (chainStart == 0 ? 0 : prefSum[s[chainStart]-'a'][chainStart-1]);
            
            if(cfreq == 1)
                return 1;
            int ans = 2;
            cfreq /= 10;
            while(cfreq){
               ans++;
               cfreq /= 10;
            }
            return ans;

        }
        
        int& ret = mem[idx][chainStart][k];
        if(ret != -1)
            return ret;
        
        int op1 = 1e9, op2 = 1e9;
        
        if(k){ //option1 skip current letter
            op1 = dp(idx+1, chainStart, k-1, s);
        }
        
        // update the next chain start iff the characters are going to change
        // otherwise use the current chain start in this call for the next one
        int nxtChainStart;
        if(chainStart != ln && s[idx] == s[chainStart])
            nxtChainStart = chainStart;
        else
            nxtChainStart = idx;
        
        op2 = dp(idx+1, nxtChainStart, k, s);
        if(chainStart != ln && s[idx] != s[chainStart]){ 
            // if the characters changed we need to compute the # of characters added 
            // by compressing the character in the chain
            int cfreq = prefSum[s[chainStart]-'a'][idx] - (chainStart == 0 ? 0 : prefSum[s[chainStart]-'a'][chainStart-1]);
            if(cfreq == 1)
                op2 += 1;
            else{
                op2 += 2 ;
                cfreq /= 10;
                while(cfreq){
                    op2++;
                    cfreq /= 10;
                }
            }               
        }
        return ret = min(op1, op2);
    }
};