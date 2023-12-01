class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> v(1 , 1);
        long long x = 1;
        for(int i = 0 ; i < rowIndex; i++)
        {
            x *= (rowIndex - i);
            x /= i + 1;
            v.push_back(x);
        }
        return v;
    }
};