class Solution {
public:

    bool fun(vector<vector<char>>& matrix, int rows, int columns, char c) {

        //  row iss questions me i! = column isiliye taki duplicate a na bnale ussi index pr
        for(int i = 0; i < 9; i++) {
            if(i != columns && matrix[rows][i] == c) {
                return false;
            }
        }

        //  column
        for(int i = 0; i < 9; i++) {
            if(i != rows && matrix[i][columns] == c) {
                return false;
            }
        }

        // Check 3x3 box
        int initialrow = (rows / 3) * 3;
        int initialcolumn = (columns / 3) * 3;

        for(int i = initialrow; i < initialrow + 3; i++) {
            for(int j = initialcolumn; j < initialcolumn + 3; j++) {

                if((i != rows || j != columns) && matrix[i][j] == c) {
                    return false;
                }
            }
        }

        return true;
    }


    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++) {

            for(int j = 0; j < 9; j++) {

                if(board[i][j] != '.') {

                    if(fun(board, i, j, board[i][j]) == false) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};