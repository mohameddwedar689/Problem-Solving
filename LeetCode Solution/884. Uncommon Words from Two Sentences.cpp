class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        // split string1 to vector of words
        vector<string> vec_1;
        stringstream str_1(s1);
        string word_1;
        while(getline(str_1 , word_1 , ' '))
            vec_1.push_back(word_1);
        // split string2 to vector of words
        vector<string> vec_2;
        stringstream str_2(s2);
        string word_2;
        while(getline(str_2 , word_2 , ' '))
            vec_1.push_back(word_2);
        // hash table idea
        map<string , int> mp;
        vector<string> ans;
        for(int i = 0 ; i < vec_1.size() ; i++)
            mp[vec_1[i]]++;
        for(int i = 0 ; i < vec_2.size() ; i++)
            mp[vec_2[i]]++;
        for(auto x:mp)
        {
            if(x.second == 1)
                ans.push_back(x.first);
        }
        return ans;
    }
};