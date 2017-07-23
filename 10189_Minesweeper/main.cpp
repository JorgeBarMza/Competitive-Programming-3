#include <iostream>
#include <vector>
using namespace std;

vector<vector<char>> board;
int rows, cols, t=1;
char c;
bool first = true;

void setAdjMines(int row, int col){
    int mineCout=0;
    for (int i = col-1; i < col+2 ; ++i) {
        for (int j = row-1; j < row+2; ++j) {
            if((j == row && i == col) || i < 0 || j < 0 || i > cols-1 || j > rows-1) continue;
            else if(board[j][i] == '*') mineCout++;
        }
    }
    board[row] [col] = '0'+mineCout;
}

int main() {
//    cin >> rows >> cols;
//    board.assign(rows, vector<char>(cols));
//    while (rows != 0 || cols !=0){
//        if(!first){
//            cout << "\n";
//        }
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                cin >> board[i][j];
//            }
//        }
//
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//                if(board[i][j] != '*') setAdjMines(i, j);
//            }
//        }
//
//        cout << "Field #" << t << ":\n";
//
//        for (int i = 0; i < rows; ++i) {
//            for (int j = 0; j < cols; ++j) {
//               cout << board[i] [j];
//            }
//            cout << "\n";
//        }
//
//        cin >> rows >> cols;
//        board.assign(rows, vector<char>(cols));
//        t++;
//        first = false;
//    }
    cout << 'A' << " " << 'z';
}

