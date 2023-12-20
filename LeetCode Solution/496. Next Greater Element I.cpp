class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int , int> mp;
        int temp = -1;
        vector<int> vec;
        for(int i = nums2.size() - 1 ; i >= 0 ; i--)
        {
            for(int j = i + 1 ; j < nums2.size() ; j++)
            {
                if(nums2[j] > nums2[i])
                {
                    temp = nums2[j];
                    break;
                }
            }
            mp[nums2[i]] = temp;
            temp = -1;
        }
        for(auto num : nums1)
        {
            if(mp.find(num) != mp.end())
            {
                auto it = mp.find(num);
                vec.push_back(it->second);
            }
            else
            {
                vec.push_back(-1);
            }
        }
        return vec;
    }
};