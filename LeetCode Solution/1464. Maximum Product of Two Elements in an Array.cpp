/*
    Author: Mohamed Dwedar
    
    1. Initialize a multimap<int, int> to store the elements of the input array along with their indices
    2. Loop over the input array and insert each element with index in map
    3. Pointing to the largest element in the map
    4. Get the index of the largest element (i)
    5. Move the pointer to point to the second largest element
    6. Get the index of the second largest element (j)
    7. return the answer of (nums[i] - 1) * (nums[j] - 1)

    - Complexity
        - Time -> O(n log n)
        - Space -> O(n)
*/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        multimap<int , int> mp;
        for(int i = 0 ; i < nums.size() ; i++)
            mp.insert(make_pair(nums[i] , i));
        auto it = mp.rbegin();
        int i = it->second;
        it++;
        int j = it->second;
        return (nums[i] - 1) * (nums[j] -1);
    }
};

/*
    Solution O(n^2)

    int maxi = 0;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        int x = 0;
        for(int j = i + 1; j < nums.size() ; j++)
        {
            if( (nums[i] - 1) * (nums[j] - 1) > x)
                x =  (nums[i] - 1) * (nums[j] - 1);
        }

        if(x > maxi)
            maxi = x;
    }
    return maxi;
*/