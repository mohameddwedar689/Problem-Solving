class Solution {
public:
    int countBinarySubstrings(string s) {
        int n = s.length();
        int arr[n] , x = 0;
        arr[0] = 1;
        for(int i = 1 ; i < n ; i++)
        {
            if(s[i - 1] != s[i])
                arr[++x] = 1;
            else
                arr[x]++;
        }
        int ans = 0;
        for(int i = 1 ; i <= x ; i++)
            ans += min(arr[i - 1] , arr[i]);
        return ans;
    }
};