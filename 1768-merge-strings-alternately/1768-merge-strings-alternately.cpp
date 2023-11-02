class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string concat = "";
        int i = 0, j = 0, n = size(word1), m = size(word2);
        while(i <= n-1 and j <= m-1) {
            concat += word1[i];
            concat += word2[j];
            ++i, ++j;
        }
        while(i < n) {
            concat += word1[i];
            i++;
        }
        while(j < m) {
            concat += word2[j];
            j++;
        }
        return concat;
    }
};