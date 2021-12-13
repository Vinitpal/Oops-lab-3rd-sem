#include <iostream>
using namespace std;

int main() {
    int r, c;

    cout << "Enter the no. of row" << endl;
    cin >> r;

    cout << "Enter the no. of column" << endl;
    cin >> c;

    int a[r][c], b[r][c];
    int ans[r][c];

    cout << "Enter elements of a" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j< c; j++ ){
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of b" << endl;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j< c; j++ ){
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            ans[i][j] = 0;
            for(int k = 0;k < c; k++) {
                ans[i][j] += a[i][k] + b[k][j];
            }
        }
    }

    cout << "Multiply of a and b is: " << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}