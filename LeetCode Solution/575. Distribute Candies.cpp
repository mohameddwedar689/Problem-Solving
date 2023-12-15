class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        /*
            time O(n)
            space O(n)
        */
        unordered_set<int> s(candyType.begin() , candyType.end());
        return min(candyType.size() / 2 , s.size());
    }
};