class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> st(allowed.begin() , allowed.end());
        int cnt = 0;
        for(auto it : words)
        {
            bool flag = false;
            for(auto ch : it)
            {
                if(st.find(ch) == st.end())
                {
                    flag = true;
                    break;
                }
            }
            if(!flag) cnt++;
        }
        return cnt;
    }
};