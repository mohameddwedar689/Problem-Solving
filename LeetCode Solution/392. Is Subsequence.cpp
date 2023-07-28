class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size() , m = t.size();

        int p1 = 0 , p2 = 0;

        while(p1 < n && p2 < m)
        {
            if(s[p1] == t[p2])
                p1++;
            p2++;
        }

        if(p1 == n )
            return true;
        else
            return false;
    }
};