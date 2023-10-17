class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string res = "",ch = "";
        for(int i=0;i<s.size()/2;i++){
            res += s[i];
            ch = res;
            while(ch.size() < s.size())ch += res;
            if(ch == s)return true;
        }
        return false;
    }
};