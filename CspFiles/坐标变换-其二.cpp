// http://118.190.20.162/view.page?gpid=T174
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;  // 操作次数和需要的答案个数
    cin >> n >> m;
    vector<vector<double>> a(n, vector<double>(2));
    for (int i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    vector<vector<double>> b(m, vector<double>(4));
    for (int i = 0; i < m; i++) {
        cin >> b[i][0] >> b[i][1] >> b[i][2] >> b[i][3];
    }
    //// 输出a和b数组
    // for (int i = 0; i < n; i++) {
    //   cout << a[i][0] << "--" << a[i][1] << endl;
    // }
    // for (int i = 0; i < m; i++) {
    //   cout << b[i][0] << "++" << b[i][1] << "++" << b[i][2] << "++" <<
    //   b[i][3]
    //        << endl;
    // }

    for (int i = 0; i < m; i++) {
        int min = b[i][0];
        int max = b[i][1];
        for (int j = min - 1; j < max; j++) {
            // cout << j << "-----------" << endl;  //
            // 验证int和double是否转换正确
            if (a[j][0] == 1) {
                b[i][2] *= a[j][1];
                b[i][3] *= a[j][1];
            }
            if (a[j][0] == 2) {
                // 在这里使用了更新的y值
                // ！！！！！！！！！！！！！！！！！！！！！！！！
                double temp1 = b[i][2];
                double temp2 = b[i][3];
                b[i][2]      = (temp1 * cos(a[j][1])) - (temp2 * sin(a[j][1]));
                b[i][3]      = (temp1 * sin(a[j][1])) + (temp2 * cos(a[j][1]));
            }
        }
    }

    for (int i = 0; i < m; i++) {
        // 保留三位小数
        cout << fixed << setprecision(3) << b[i][2] << " " << b[i][3] << endl;
    }
    return 0;
}
