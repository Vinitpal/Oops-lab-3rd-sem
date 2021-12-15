#include <iostream>
using namespace std;

int main() {
    int r1, c1,r2,c2;

    cout << "Enter the no. of row and column of A : " << endl;
    cin >> r1 >> c1;

    cout << "Enter the no. of row and column of B : " << endl;
    cin >> r2 >> c2;

    int a[r1][c1], b[r2][c2];
    
    if (r2 != c1){
        cout<<"Multiplication is not possible since r2 and c1 are not equal.";
        return 0;
    }
    int ans[r1][c2];

    cout << "Enter elements of a" << endl;
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j< c1; j++ ){
            cin >> a[i][j];
        }
    }

    cout << "Enter elements of b" << endl;
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j< c2; j++ ){
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            ans[i][j] = 0;
            for(int k = 0;k < c1; k++) {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Multiply of a and b is: " << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}