class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int , int> mp;
        int ans = 0;
        for(auto n:nums)
            mp[n]++;
        for(auto [f , s] : mp)
            if(mp.find(f + 1) != mp.end())
                ans = max(ans , s + mp[f + 1]);
        return ans;
    }
};