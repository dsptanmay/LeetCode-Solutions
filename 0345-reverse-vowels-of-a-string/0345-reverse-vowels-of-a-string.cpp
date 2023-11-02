class Solution {
public:
    string reverseVowels(string s) 
    {
        vector<char> vowels;
        
        for(char x: s)
        {
            char ch = tolower(x);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels.push_back(x);
        }
        
        int j = vowels.size() - 1;
        for(char& x: s)
        {
            char ch = tolower(x);
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                x = vowels[j--];
        }
        
        return s;
    }
};