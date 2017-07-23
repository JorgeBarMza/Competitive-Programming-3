#include <iostream>
using namespace std;

void pK(int res, int cols, int rows){
    cout << res << " knights may be placed on a " << rows << " row " << cols << " column board.\n";
}

int main() {
    int rows, cols, dom, res;
    cin >> rows >> cols;
    while (rows || cols){
        if(rows == 0 || cols == 0) pK(0, cols, rows);
        else if(rows == 1 || cols == 1) pK(rows * cols, cols, rows);
        else if(rows == 2 || cols == 2){
            dom = (rows == 2)? cols:rows;
            if(dom<5) pK(4, cols, rows);
            else {
                res = (dom / 4) * 4;
                if (dom % 4 > 1) res += 4;
                else if (dom % 4 == 1) res += 2;
                pK(res, cols, rows);
            }
        }
        else if(rows % 2 == 0) pK(rows/2 * cols,cols,rows);
        else if(cols % 2 == 0) pK(cols/2 * rows,cols,rows);
        else pK((rows/2) * (cols/2) + (rows/2 +1)*(cols/2 +1),cols,rows);
        cin >> rows >> cols;
    }
}