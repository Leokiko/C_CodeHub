// http://118.190.20.162/view.page?gpid=T165
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 块数和右上角坐标
    int n, a, b;
    cin >> n >> a >> b;
    // 保证x1<x2,y1<y2，且交集为0，但边界可能重叠
    vector<int> x1(n), x2(n), y1(n), y2(n);
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    int re = 0;
    for (int i = 0; i < n; i++) {
        if (x2[i] >= 0 && y2[i] >= 0) {
            if (x2[i] <= a && y2[i] <= b) {  // 左下
                re += (y2[i] - max(y1[i], 0)) * (x2[i] - max(x1[i], 0));
            }

            else if (x2[i] >= a && y2[i] <= b && x1[i] <= a) {  // 右下
                re += (y2[i] - max(y1[i], 0)) * (a - max(x1[i], 0));
            }

            else if (x2[i] <= a && y2[i] >= b && y1[i] <= b) {  // 左上
                re += (b - max(y1[i], 0)) * (x2[i] - max(x1[i], 0));
            }

            else if (x2[i] >= a && y2[i] >= b &&
                     (x1[i] < a && y1[i] < b)) {  // 右上
                re += (b - max(y1[i], 0)) * (a - max(x1[i], 0));
            }
        }  // 整个判断结束
    }

    cout << re << endl;
    return 0;
}

// 以下是简化代码
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 块数和右上角坐标
    long long int n, a, b;
    cin >> n >> a >> b;
    // 保证x1<x2,y1<y2，且交集为0，但边界可能重叠
    vector<long long int> x1(n), x2(n), y1(n), y2(n);
    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];
    }
    long long int re = 0;
    for (int i = 0; i < n; i++) {
        // 计算矩形交集的左下角和右上角坐标
        long long int left   = max(x1[i], 0LL);  // 左下角 x 坐标
        long long int bottom = max(y1[i], 0LL);  // 左下角 y 坐标
        long long int right  = min(x2[i], a);    // 右上角 x 坐标
        long long int top    = min(y2[i], b);    // 右上角 y 坐标

        // 判断矩形是否相交
        if (left < right && bottom < top) {
            re += (right - left) * (top - bottom);
        }
    }

    cout << re << endl;
    return 0;
}
