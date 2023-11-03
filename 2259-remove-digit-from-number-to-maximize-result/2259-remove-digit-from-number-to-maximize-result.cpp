class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        string res = "";
        for(int i=0; i<number.length(); ++i)
        {
            if(number[i] != digit)
                continue;
            
            string rem = "";
            for(int j=0; j<number.length(); ++j)
            {
                if(j!=i)
                    rem += number[j];
            }
            res = max(res, rem);
        }
        
        return res;
    }
};