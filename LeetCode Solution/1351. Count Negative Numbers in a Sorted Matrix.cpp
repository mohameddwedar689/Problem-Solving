class Solution {
public:
    int func(vector<int> v , int col)
    {
        int l  = 0 , r = col - 1;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(v[mid] < 0)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if(l >= col)
            return 0;
        return col - l;
    }
    int countNegatives(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int ans = 0;
        for(int i = 0 ; i < m ; i++)
        {
            ans += func(grid[i] , n);
        }
        return ans;
    }
};