class Solution {
public:
    bool isAnagram(string s, string t) {
        // If the lengths differ, they cannot be anagrams.
        if(s.size() != t.size())
            return false;
        // hash map solution
        map<char , int> smp , tmp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            smp[s[i]]++;
            tmp[t[i]]++;
        }
        for(auto& it:smp)
        {
            if(tmp[it.first] != it.second)
                return false;
        }
        return true;
    }
};