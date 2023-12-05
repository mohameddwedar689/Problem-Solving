class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> mp;
        int n = nums.size();
        // hash table
        for(int i = 0 ; i < n ; i++)
            mp[nums[i]] = i;
        // find the complement
        for(int i = 0 ; i < n ; i++)
        {
            int x = target - nums[i];
            if(mp.count(x) && mp[x] != i)
                return {i , mp[x]};
        } 
        return {};
    }
};