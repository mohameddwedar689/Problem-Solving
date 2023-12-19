class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char , int> mp1 , mp2;
        for(char ch : s)
            mp1[ch]++;
        for(char ch : t)
            mp2[ch]++;
        for(char ch : t)
            if(mp2[ch] != mp1[ch])
                return ch;
        return ' ';
    }
};