class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left ; i <= right ; i++)
        {
            int t = i;
            bool flag = false;
            while(t > 0)
            {
                int r = t % 10;
                if(r != 0 && i % r == 0)
                    flag = true;
                else
                {
                    flag = false;
                    break;
                }
                t /= 10;
            }
            if(flag)
                ans.push_back(i);
        }
        return ans;
    }
};