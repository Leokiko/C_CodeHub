// http://118.190.20.162/view.page?gpid=T175
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;  // 操作数和初始坐标数
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    vector<vector<int>> b(m, vector<int>(2));
    for (int i = 0; i < m; i++) {
        cin >> b[i][0] >> b[i][1];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            b[i][0] = b[i][0] + a[j][0];
            b[i][1] = b[i][1] + a[j][1];
        }
    }
    for (int i = 0; i < m; i++) {
        cout << b[i][0] << " " << b[i][1] << endl;
    }
    return 0;
}
