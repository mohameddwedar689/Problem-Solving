class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        vector<int> sizes;
        for(int i = 0 ; i < n ; i++)
        {
            vector<string> str;
            stringstream ss(sentences[i]);
            string word;
            while (getline(ss, word, ' ')) {
                str.push_back(word);
            }
            sizes.push_back(str.size());
            str.clear();
        }
        return *max_element(sizes.begin() , sizes.end());
    }
};