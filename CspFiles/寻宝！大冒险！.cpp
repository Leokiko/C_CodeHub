// http://118.190.20.162/view.page?gpid=T147
#include <iostream>
#include <vector>
using namespace std;

bool check(int a, int b) {
    if (a == b)
        return false;
    return true;
}
int main() {
    int n, L, S;
    cin >> n >> L >> S;
    vector<vector<int>> a(L + 1, vector<int>(L + 1, 0));
    vector<vector<int>> b(S + 1, vector<int>(S + 1, 0));
    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        a[u][v] = 1;
    }
    for (int i = 0; i < S + 1; i++) {
        for (int j = 0; j < S + 1; j++) {
            cin >> b[i][j];
        }
    }

    //// check a和b
    // for (int i = 0; i < L + 1; i++) {
    //   for (int j = 0; j < L + 1; j++) {
    //     cout << a[i][j] << " ";
    //   }
    //   cout << endl;
    // }
    // cout << endl;
    // for (int i = 0; i < S + 1; i++) {
    //   for (int j = 0; j < S + 1; j++) {
    //     cout << b[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    // 因为题目所给的是视觉矩阵，0,0在左下方，所有需要将b矩阵进行旋转
    vector<vector<int>> b1(S + 1, vector<int>(S + 1, 0));
    for (int i = 0; i < S + 1; i++) {
        for (int j = 0; j < S + 1; j++) {
            b1[i][j] = b[S - i][j];
        }
    }
    //// check b1
    // cout << "check b1" << endl;
    // for (int i = 0; i < S + 1; i++) {
    //   for (int j = 0; j < S + 1; j++) {
    //     cout << b1[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    int re = 0;
    int i, j, k, l, flag;
    for (i = 0; i < L - S + 1; i++) {
        for (l = 0; l < L - S + 1; l++) {  // l行，i列
            if (a[l][i] == 0)
                continue;
            flag = 1;
            for (j = i; j < S + 1 + i; j++) {
                for (k = l; k < S + 1 + l; k++) {  // j列，k行
                    // cout << a[k][j] << " a和b1 " << b1[k - l][j - i] << endl;
                    if (check(a[k][j], b1[k - l][j - i])) {  // 不等为true
                        flag = 0;
                        // cout << a[k][j] << " 不等的a和b1 " << b1[k - l][j -
                        // i] << endl;
                        break;
                    }
                }
                if (flag == 0) {  // 如果没有超时，那么不判断也无所谓
                    // cout << " 提前结束的判断 " << !flag << endl;
                    break;
                }
            }
            if (flag) {
                // cout << " 最终完全匹配的0,0坐标 " << l << " " << i << endl <<
                // endl;
                re++;
            }
        }
    }

    cout << re << endl;
    return 0;
}
