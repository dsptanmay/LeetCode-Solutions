#define pb push_back
#define ppb pop_back
#define ll long long
#define vts vector<string>
#define vvts vector<vts>
#define all(x) x.begin(), x.end()
#define accm(x, y) accumulate((x), (y))


class Solution {
private:
    vvts res;
public:
    Solution() : res() {}
    
    bool isSafe(int row, int col, vts& board, int n)
    {
        int _row = row;
        int _col = col;
        
        while(row >= 0 && col >= 0)
        {
            if(board[row][col] == 'Q')
                return false;
            row--;
            col--;
        }
        
        col = _col;
        row = _row;
        
        while(col >= 0)
        {
            if(board[row][col] == 'Q')
                return false;
            col--;
        }
        
        // row = _row;
        col = _col;
        
        while(row < n && col >= 0)
        {
            if(board[row][col] == 'Q')
                return false;
            row++;
            col--;
        }
        return true;
        return true;
    }
    void findAns(int col, vts& board, int n)
    {
        if(col == n)
        {
            res.pb(board);
            return;
        }
        
        for(int row=0; row<n; ++row)
        {
            if(isSafe(row, col, board, n))
            {
                board[row][col] = 'Q';
                findAns(col + 1, board, n);
                board[row][col] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vts board(n);
        string s(n, '.');
        for(int i=0; i<n; ++i)
            board[i] = s;
        findAns(0, board, n);
        return res;
    }
};