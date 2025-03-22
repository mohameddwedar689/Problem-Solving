class Solution {
    public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
            sort(intervals.begin() , intervals.end());
            if(intervals.size() == 1)
                return intervals;
            vector<vector<int>> ans;
            vector<int> current;
            current = intervals[0];
            for(int i = 1 ; i < intervals.size() ; i++) {
                if(intervals[i][0] <= current[1]) {
                    current[1] = max(current[1], intervals[i][1]);
                }
                else {
                    ans.push_back(current);
                    current = intervals[i];
                }
            }
            ans.push_back(current);
            return ans;
        }
    };