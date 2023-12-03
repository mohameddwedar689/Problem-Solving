class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int l = 0 , r = n - 1;
        while(l < n)
        {
            if(arr[l] == 0)
            {
                while(r > l)
                {
                    arr[r] = arr[r - 1];
                    r--;
                }
                l += 2;
                r = n - 1;
            }
            else
            {
                l++;
            }
        }
    }
};