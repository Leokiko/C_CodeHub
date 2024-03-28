// http://118.190.20.162/view.page?gpid=T169
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // n为矩阵的行数，d为矩阵的列数
    int n, d;
    cin >> n >> d;
    vector<vector<int>> Q(n, vector<int>(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> Q[i][j];
        }
    }
    vector<vector<int>> K(n, vector<int>(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> K[i][j];
        }
    }
    vector<vector<int>> V(n, vector<int>(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cin >> V[i][j];
        }
    }
    vector<int> W(n);
    for (int i = 0; i < n; i++) {
        cin >> W[i];
    }

    // 计算QxKt，并不需要转置K，因为是多余的操作，只需要乘出结果即可，而且转置2x3的矩阵需要Vector适配
    vector<vector<int>> QxKt(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < d; k++) {
                QxKt[i][j] += Q[i][k] * K[j][k];
            }
        }
    }
    // 用W乘以QxKt
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            QxKt[i][j] = W[i] * QxKt[i][j];
        }
    }
    // 最后用QxKt乘以V，此时注意V[k][j]的顺序，和之前计算QxKt的时候不一样
    // 之前是Kt，现在是V
    vector<vector<int>> result(n, vector<int>(d));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            for (int k = 0; k < n; k++) {
                result[i][j] += QxKt[i][k] * V[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < d; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
