class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0, len=0, j=0;
        unordered_map <char, bool> map;
        while(j<s.length() && i<s.length()){
            if(map[s[j]] == 0){
                map[s[j]] = 1;
                len = max(len, j-i+1);
                j++;
            } else {
                map[s[i]] = 0;
                i++;
            }
        }
        return len;
    }
};
