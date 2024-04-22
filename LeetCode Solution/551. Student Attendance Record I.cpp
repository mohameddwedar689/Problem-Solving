class Solution {
public:
    bool checkRecord(string s) {
        int a = 0 , l = 0 , check = 0;
        int n = s.length();
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == 'A')
                a++;
        }
        for(int i = 0 ; i < n ; i++)
        {
            if(s[i] == 'L')
            {
                check++;
            }
            else
            {
                l = max(l , check);
                check = 0;
            }
        }
        l = max(l , check);
        if(a < 2 && l < 3)
            return true;
        return false;
    }
};