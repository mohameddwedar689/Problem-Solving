class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n = arr.size();
        vector<int> pre(n);
        pre[0] = arr[0];
        int sum = arr[0];
        for(int i = 1 ; i < n ; i++)
        {
            pre[i] = pre[i - 1] + arr[i];
            sum += arr[i];
        }
        for(int i = 2; i < n ; i += 2)
        {
            for(int j = 0; j + i < n ; j++)
            {
                if(j == 0)
                {
                    sum += pre[i];
                }
                else
                {
                    sum += pre[i + j] - pre[j - 1];
                }
            }
        }
        return sum;
    }
};