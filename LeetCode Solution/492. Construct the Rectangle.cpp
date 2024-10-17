class Solution {
public:
    vector<int> constructRectangle(int area) {
        int start = sqrt(area);
        vector<int> ans;
        for(int i = start ; i >= 1 ; i--) {
            if(area % i == 0) {
                ans.push_back(area / i);
                ans.push_back(i);
                return ans;
            }
        }

        vector<int> v;
        v.push_back(area);
        v.push_back(1);
        return v;
    }
};