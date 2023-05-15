#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
  vector<vector<char>> board = {};
  bool valid = isValidSudoku(board);
  cout << valid << "\n";
  return 0;
}

bool isValidSudoku(vector<vector<char>>& board) {
  for (int i=0;i<9;i++){
    unordered_map<int, int> cols_obs;
    unordered_map<int, int> rows_obs;
    unordered_map<int, int> sub_cell;
    int x_offset = (i/3)*3;
    int y_offset = (i-((i/3)*3))*3;
    for (int j=0;j<9;j++){

      if (board[i][j] != '.'){
        int number_row = board[i][j] - '0';
        rows_obs[number_row]++;
        if (rows_obs[number_row]>1){
          return false;
        }
      }

      if (board[j][i] != '.'){
        int number_col = board[j][i] - '0';
        cols_obs[number_col]++;
        if (cols_obs[number_col]>1){
          return false;
        }                
      }

      int x_coord = (j/3) + x_offset;
      int y_coord = (j-((j/3)*3)) + y_offset;

      if (board[x_coord][y_coord] != '.'){
        int number_sub_cell = board[x_coord][y_coord] - '0';

        sub_cell[number_sub_cell]++;
        if (sub_cell[number_sub_cell]>1){
          return false;
        }
      }
    }
  }
  return true;
}