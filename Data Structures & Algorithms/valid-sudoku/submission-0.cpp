// class Solution {
// public:
//     bool isValidSudoku(vector<vector<char>>& board) {
//         vector<set<char>> row(9);
//         vector<set<char>> col(9);
//         vector<pair<int,int>,set<char>>map(3);

//         for(int i = 0;i<9;i++){
//             for(int j = 0;j<9;j++){
//                 // check it for row:
//                 if(board[i][j] == '.') continue;

//                 // Row check
//                 if(row[i].find(board[i][j]) != row[i].end()) return false;
//                 else row[i].insert(board[i][j]);

//                 // column check
//                 if(col[j].find(board[i][j]) != col[j].end()) return false;
//                 else col[j].insert(board[i][j]);

//                 if(map[{i/3,j/3}].find(board[i][j])!= map[{i/3,j/3}]) return false;
//                 else map[{i/3,j/3}].insert(board[i][j]);
//             }
//         }
//         return true;
//     }
// };

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>> row(9);
        vector<set<char>> col(9);
        vector<vector<set<char>>> subgrid(3, vector<set<char>>(3));

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] == '.') continue;

                // Row check
                if(row[i].find(board[i][j]) != row[i].end()) return false;
                else row[i].insert(board[i][j]);

                // Column check
                if(col[j].find(board[i][j]) != col[j].end()) return false;
                else col[j].insert(board[i][j]);

                // Subgrid check
                if(subgrid[i/3][j/3].find(board[i][j]) != subgrid[i/3][j/3].end()) return false;
                else subgrid[i/3][j/3].insert(board[i][j]);
            }
        }
        return true;
    }
};

