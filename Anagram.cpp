class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0};
        for(int i=0; i<s.size(); i++){
            int c = s[i] - 'a';
            count[c]++;
        }
        for(int i=0; i<t.size(); i++){
            int c = t[i] - 'a';
            count[c]--;
        }
        for(int i=0; i<26; i++){
            if(count[i]!=0) return false;
        } return true;
    } 
};
