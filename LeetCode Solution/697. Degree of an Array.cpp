class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0 , ans = n;
        unordered_map<int , int> f , l , r;
        for(int i = 0 ; i < n ; i++)
        {
            f[nums[i]]++;
            maxi = max(maxi , f[nums[i]]);
            if(l.find(nums[i]) == l.end())
                l[nums[i]] = i;
            r[nums[i]] = i;
        }
        for(auto& x : f)
        {
            if(x.second == maxi)
                ans = min(ans , r[x.first] - l[x.first] + 1);
        }
        return ans;
    }
};