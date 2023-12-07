class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        string row_1 = "qwertyuiop" , row_2 = "asdfghjkl" , row_3 = "zxcvbnm";
        int first_row = 0 , second_row = 0 , third_row = 0;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < words[i].size() ; j++)
            {
                if(row_1.find(tolower(words[i][j])) != std::string::npos)
                    first_row++;
                if(row_2.find(tolower(words[i][j])) != std::string::npos)
                    second_row++;
                if(row_3.find(tolower(words[i][j])) != std::string::npos)
                    third_row++;
            }
            if(first_row == 0 && second_row == 0)
                ans.push_back(words[i]);
            else if(second_row == 0 && third_row == 0)
                ans.push_back(words[i]);
            else if(first_row == 0 && third_row == 0)
                ans.push_back(words[i]);
            
            first_row = 0 , second_row = 0 , third_row = 0;
        }
        return ans;
    }
};