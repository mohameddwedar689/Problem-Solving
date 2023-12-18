class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s_num1(nums1.begin() , nums1.end());
        unordered_set<int> s_num2(nums2.begin() , nums2.end());
        vector<int> ans;
        for(int num : s_num1)
        {
            if(s_num2.find(num) != s_num2.end())
                ans.push_back(num);
        }
        return ans;
    }
};