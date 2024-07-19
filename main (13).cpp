#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<string>& board, int row, int col) {
    // Check if no Queen is attacking in the same column or diagonal positions
    int i;
    for (i = 0; i < row; i++) {
        if (board[i][col] == 'Q')
            return false;
        if ((col - (row - i) >= 0) && (board[i][col - (row - i)] == 'Q'))
            return false;
        if ((col + (row - i) < board.size()) && (board[i][col + (row - i)] == 'Q'))
            return false;
    }
    return true;
}

void solveNQueens(vector<string>& board, int row, vector<vector<string>>& solutions) {
    if (row == board.size()) {
        solutions.push_back(board);
        return;
    }
    
    for (int col = 0; col < board.size(); col++) {
        if (isSafe(board, row, col)) {
            board[row][col] = 'Q';
            solveNQueens(board, row + 1, solutions);
            board[row][col] = '.';
        }
    }
}

int main() {
    int n = 6;
    vector<string> board(n, string(n, '.'));
    vector<vector<string>> solutions;
    
    solveNQueens(board, 0, solutions);
    
    for (auto solution : solutions) {
        for (auto row : solution) {
            cout << row << endl;
        }
        cout << endl;
    }
    
    return 0;
}