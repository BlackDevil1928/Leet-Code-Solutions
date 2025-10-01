class Solution {
private:
    int n;
    vector<vector<string>> ans;
    
    // Bit masks to track attacked positions
    // fd: forward diagonal (top-left to bottom-right)
    // bd: backward diagonal (top-right to bottom-left)
    // col: columns
    int fd = 0, bd = 0, col = 0;
    
    // Backtracking function to place queens row by row
    void backtrack(int row, vector<string>& board) {
        // Base case: all queens are placed successfully
        if (row == n) {
            ans.push_back(board);
            return;
        }
        
        // Try placing a queen in each column of the current row
        for (int j = 0; j < n; ++j) {
            // Check if current position is under attack using bit masks
            // Forward diagonal: i+j is constant for cells on same diagonal
            // Backward diagonal: i+n-1-j is constant for cells on same diagonal
            // Column: j is the column index
            if ((fd & (1 << (row + j))) || 
                (bd & (1 << (row + n - 1 - j))) || 
                (col & (1 << j))) {
                continue; // Position is under attack, skip
            }
            
            // Mark this position as attacked in all three directions
            fd |= 1 << (row + j);
            bd |= 1 << (row + n - 1 - j);
            col |= 1 << j;
            
            // Place the queen
            board[row][j] = 'Q';
            
            // Recursively place queens in the next row
            backtrack(row + 1, board);
            
            // Backtrack: remove the queen
            board[row][j] = '.';
            
            // Unmark the attacked positions
            fd &= ~(1 << (row + j));
            bd &= ~(1 << (row + n - 1 - j));
            col &= ~(1 << j);
        }
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        // Handle special cases
        if (n == 1) return {{"Q"}};
        if (n <= 3) return {}; // No solution exists for n=2 and n=3
        
        this->n = n;
        
        // Initialize the board with all empty cells
        string emptyRow(n, '.');
        vector<string> board;
        for (int i = 0; i < n; ++i) {
            board.push_back(emptyRow);
        }
        
        // Start backtracking from row 0
        backtrack(0, board);
        
        return ans;
    }
};
