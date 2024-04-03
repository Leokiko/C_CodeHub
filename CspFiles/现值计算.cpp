// http://118.190.20.162/view.page?gpid=T160
#include <cmath>
#include <iostream>
#include <vector>
// 以当前价值算
// double cacu(double x, double ii, double k) {
//   return x * pow((1 + ii), k);
// }
// 以未来价值算
double cacu(double x, double ii, double k) {
    return x * pow((1 + ii), -k);
}

using namespace std;
int main() {
    double n, ii;  // n是n年，i是银行年利率
    cin >> n >> ii;
    vector<double> a(n + 1);
    for (int i = 0; i < n + 1; i++) {
        cin >> a[i];
    }
    // 计算每年相当于第0年的价值
    for (int i = 0; i < n + 1; i++) {
        a[i] = cacu(a[i], ii, i);
    }

    // 输出答案
    double re = 0;
    for (int i = 0; i < n + 1; i++) {
        re += a[i];
    }
    cout << re << endl;
    return 0;
}
