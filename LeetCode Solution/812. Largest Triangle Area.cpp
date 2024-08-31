class Solution {
public:
    double calculate(vector<int>& p1 , vector<int>& p2 , vector<int>& p3) {
        return 0.5 * abs(p1[0] * (p2[1] - p3[1]) + p2[0] * (p3[1] - p1[1]) + p3[0] * (p1[1] - p2[1]));
    } 
    double largestTriangleArea(vector<vector<int>>& points) {
        double max_area = 0.0;
        int n = points.size();
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = i + 1 ; j < n ; j++)
            {
                for(int k = j + 1; k < n ; k++)
                {
                    double area = calculate(points[i] , points[j] , points[k]);
                    max_area = max(max_area , area);
                }
            }
        }
        return max_area;
    }
};