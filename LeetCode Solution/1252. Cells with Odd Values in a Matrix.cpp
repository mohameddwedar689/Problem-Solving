class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> v(m , vector<int> (n , 0));
        for(int i = 0 ; i < indices.size() ; i++)
        {
            int r = indices[i][0];
            int c = indices[i][1];
            for(int j = 0 ; j < n ; j++)
                v[r][j]++;
            for(int k = 0 ; k < m ; k++)
                v[k][c]++;
        }

        int cnt = 0;
        for(int i = 0 ; i < m ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                if(v[i][j] % 2 != 0)
                    cnt++;
            }
        }
        return cnt;
    }
};