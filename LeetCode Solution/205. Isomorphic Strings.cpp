class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // if the length of s different from lenght of t thay can not be isomorphic
        if(s.size() != t.size())
            return false;
        // hash map solution
        map<char , char> smp , tmp;
        for(int i = 0 ; i < s.size() ; i++)
        {
            char s_ch = s[i] , t_ch = t[i];
            if(!(smp.find(s_ch) != smp.end()))
                smp[s_ch] = t_ch;
            if(!(tmp.find(t_ch) != tmp.end()))
                tmp[t_ch] = s_ch;

            if(smp[s_ch] != t_ch || tmp[t_ch] != s_ch)
                return false;
        } 
        return true;
    }
};