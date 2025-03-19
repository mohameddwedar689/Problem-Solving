class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            int word_one_size = word1.length();
            int word_two_size = word2.length();
            string ans = "";
            if(word_one_size == word_two_size) {
                for(int i = 0 ; i < word_one_size; i++) {
                    ans += word1[i];
                    ans += word2[i];
                }
            }
    
            if(word_two_size > word_one_size) {
                for(int i = 0 ; i < word_one_size; i++) {
                    ans += word1[i];
                    ans += word2[i];
                }
                for(int i = word_one_size ; i < word_two_size ; i++) {
                    ans += word2[i];
                }
            }
    
            if(word_one_size > word_two_size) {
                for(int i = 0 ; i < word_two_size; i++) {
                    ans += word1[i];
                    ans += word2[i];
                } 
                for(int i = word_two_size ; i < word_one_size ; i++) {
                    ans += word1[i];
                }  
            }
            return ans;
        }
    };