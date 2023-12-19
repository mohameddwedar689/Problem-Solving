class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // covert string to vector(string)
        vector<string> vec;
        stringstream ss(s);
        string word;
        while (std::getline(ss, word, ' ')) {
            vec.push_back(word);
        }
        if (vec.size() != pattern.size())
            return false;
        
        map<char , string> ctw;
        map<string , char> wtc;

        for(int i = 0 ; i < pattern.size() ; i++)
        {
            char ch = pattern[i];
            string word = vec[i];

            if(ctw.count(ch) && ctw[ch] != word)
                return false;
            if(wtc.count(word) && wtc[word] != ch)
                return false;
            
            ctw[ch] = word;
            wtc[word] = ch;
        }
        return true;
    }
};