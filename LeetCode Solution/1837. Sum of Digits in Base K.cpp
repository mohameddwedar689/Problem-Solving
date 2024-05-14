class Solution {
public:
    int sumBase(int n, int k) {
        string ans = "";
        while(n > 0)
        {
            int r = n / k;
            int temp = r * k;
            int out = n - temp;
            stringstream stream;
            stream << out;
            char ch;
            stream >> ch;
            ans.push_back(ch);
            n = r;
        }
        int cnt = 0;
        for(int i = 0 ; i < ans.size() ; i++)
        {
            cnt += ans[i] - '0';
        }
        return cnt;
    }
};