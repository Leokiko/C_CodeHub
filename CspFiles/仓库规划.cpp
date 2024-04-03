// http://118.190.20.162/view.page?gpid=T180
#include <iostream>
#include <vector>
using namespace std;

bool check(long long int i, long long int j) {
    if (i >= j)
        return true;
    return false;
}
int main() {
    int n, m;  // n个仓库，m维的位置向量编码
    cin >> n >> m;
    // 声明仓库
    vector<vector<long long int>> a(n, vector<long long int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    //// check a
    // for (int i = 0; i < n; i++) {
    //   for (int j = 0; j < m; j++) {
    //     cout << a[i][j] << " ";
    //   }
    //   cout << endl;
    // }

    vector<int> re(n, 0);
    int         i, j, k;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j)  // 同一仓库不比较
                continue;
            for (k = 0; k < m; k++) {
                if (check(a[i][k], a[j][k]))
                    break;
            }
            if (k == m) {
                re[i] = j + 1;
                break;
            }
        }
    }

    // 输出答案
    for (int i = 0; i < n; i++) {
        cout << re[i] << endl;
    }

    return 0;
}
