class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        /*
            time O(n+m)
            space O(1)
        */
        map<char , int> mp;
        for(char c:magazine)
            mp[c]++;
        for(char c:ransomNote)
        {
            mp[c]--;
            if(mp[c] < 0)
                return false;
        }
        return true;
    }
};