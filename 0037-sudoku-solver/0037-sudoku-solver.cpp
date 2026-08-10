class Solution {
public:

    bool valid(vector<vector<char>>& matrix, int row, int column, char c) {

        // Check row
        for(int i = 0; i < 9; i++) {
            if(matrix[row][i] == c) {
                return false;
            }
        }

        // Check column
        for(int i = 0; i < 9; i++) {
            if(matrix[i][column] == c) {
                return false;
            }
        }

        // Find starting position of 3x3 box
        int initialrow = (row / 3) * 3;
        int initialcolumn = (column / 3) * 3;

        // Check 3x3 box
        for(int i = initialrow; i < initialrow + 3; i++) {
            for(int j = initialcolumn; j < initialcolumn + 3; j++) {

                if(matrix[i][j] == c) {
                    return false;
                }
            }
        }

        return true;
    }


    bool fun(vector<vector<char>>& matrix) {

        for(int i = 0; i < 9; i++) {

            for(int j = 0; j < 9; j++) {

                if(matrix[i][j] == '.') {

                    for(char c = '1'; c <= '9'; c++) {

                        // Check whether c can be placed
                        if(valid(matrix, i, j, c)) {

                            // Put number
                            matrix[i][j] = c;

                            // Recursion
                            if(fun(matrix)) {
                                return true;
                            }

                            // Backtrack
                            matrix[i][j] = '.';
                        }
                    }

                    // No number worked
                    return false;
                }
            }
        }

        // No empty cells left
        return true;
    }


    void solveSudoku(vector<vector<char>>& board) {
        fun(board);
    }
};