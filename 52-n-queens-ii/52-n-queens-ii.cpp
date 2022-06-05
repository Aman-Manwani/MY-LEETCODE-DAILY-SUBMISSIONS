class Solution {
    private:
    vector<string> board;
    int count=0;
    void place(int i, int vert, int ldiag, int rdiag) {
        int N = board.size();
        if (i == N) 
        {
            count++;
            vector<string> res;
            return;
        }
        for (int j = 0; j < N; j++)
        {
            int vmask = 1 << j, lmask = 1 << (i+j), rmask = 1 << (N-i-1+j);
            if (vert & vmask || ldiag & lmask || rdiag & rmask) continue;
            board[i][j] = 'Q';
            place(i+1, vert | vmask, ldiag | lmask, rdiag | rmask);
            board[i][j] = '.';
        }
    }
    public:
    int totalNQueens(int n) 
    {
        board.resize(n, string(n, '.'));
        place(0,0,0,0);
        return count;  
    }

};