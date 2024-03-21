class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int l = s.length();
        unordered_set<string> uos;
        for(int i = 0 ; i < l / 2 ; i++)
        {
            int n = i + 1;
            uos.insert(s.substr(0 , n));
            for(int j = i + 1; j < l ;)
            {
                if(uos.find(s.substr(j , n)) != uos.end() && j + n == l)
                    return true;
                else if(uos.find(s.substr(j , n)) == uos.end())
                {
                    uos.clear();
                    break;
                }
                else
                    j = j + n;
            }

        }
        return false;
    }
};