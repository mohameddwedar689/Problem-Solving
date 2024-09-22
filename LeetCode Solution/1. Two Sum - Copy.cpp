class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        
        //check if there are less than 2 points
        if(coordinates.size() < 2)
            return true;
        
        //calculate slope
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        
        int xx = (x2 - x1);
        int yy = (y2 - y1);
        
        //check if all other points have the same slope
        for(int i = 2; i < coordinates.size(); i++)
        {
            int x = coordinates[i][0];
            int y = coordinates[i][1];
            
            if(xx*(y - y1) != yy*(x - x1))
                return false;
        }
        
        return true;
    }
};