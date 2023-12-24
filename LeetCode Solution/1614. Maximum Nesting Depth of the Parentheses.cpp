class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0 , maxi = 0;
        stack<char> st;
        for(char ch : s)
        {
            if(ch == '(')
            {
                st.push(ch);
                cnt++;
                maxi = max(cnt , maxi);
            }
            else if(ch == ')')
            {
                st.pop();
                cnt--;
                maxi = max(cnt , maxi);
            }
        }
        return maxi;
    }
};