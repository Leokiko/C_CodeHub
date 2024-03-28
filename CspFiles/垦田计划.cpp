// http://118.190.20.162/view.page?gpid=T164
#include <iostream>
#include <vector>
using namespace std;

vector<long long int> maxx(vector<vector<long long int>> a) {
    vector<long long int> re = {-1, -1};
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i][0] > re[0]) {
            re[0] = a[i][0];  // 最大值
            re[1] = i;        // 最大值的下标
        }
    }
    return re;
}
int main() {
    long long int n, m, k;  // n个区域，m个资源，最少开垦k天
    cin >> n >> m >> k;
    vector<vector<long long int>> a(n, vector<long long int>(2));
    for (size_t i = 0; i < n; i++) {
        cin >> a[i][0] >> a[i][1];
    }
    vector<long long int> re = maxx(a);

    while (m > 0) {
        if (m - a[re[1]][1] < 0)
            break;
        m -= a[re[1]][1];
        a[re[1]][0]--;
        re = maxx(a);
    }

    if (re[0] < k)
        cout << k << endl;
    else {
        cout << re[0] << endl;
    }
    return 0;
}
