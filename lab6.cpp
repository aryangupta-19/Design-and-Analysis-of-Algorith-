// Naive matrix multiplication 
// Matrix multiplication without D & C
// Matrix multiplication with D & C
#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<vector<int>> m1 = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    vector<vector<int>> m2 = {{7, 8, 9},{4, 5, 6},{1, 2, 3}};

    int n = 3;
    vector<vector<int>> C(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Result:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}





