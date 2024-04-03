// http://118.190.20.162/view.page?gpid=T159
#include <cmath>
#include <iostream>
using namespace std;

const int N = 101;
int       n, m;
int       p[N], t[N];
int       earliest[N], latest[N];

int main() {
    int mark = 1;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> p[i];
    for (int i = 1; i <= m; i++)
        cin >> t[i];
    // 将每个科目的最早时间确定
    for (int i = 1; i <= m; i++) {
        if (p[i] == 0)
            earliest[i] = 1;
        else
            earliest[i] = earliest[p[i]] + t[p[i]];
        // 判断所有科目最早开始的情况是否可以完成所有科目
        if (earliest[i] + t[i] - 1 > n)
            mark = 0;
    }
    // 输出每项科目的最早开始时间
    for (int i = 1; i <= m; i++)
        cout << earliest[i] << " ";
    cout << endl;
    // 判断是否可以完成项目
    if (mark == 1) {
        // 将确定每个科目的最晚，从最后的科目往前推，需要把依赖该科目的科目所消耗时间算上
        for (int i = m; i >= 1; i--) {
            int temp = 366;
            for (int j = i + 1; j <= m; j++) {
                // 寻找是否有依赖该科目的科目
                if (p[j] == i)
                    temp = min(temp, latest[j]);
            }
            // 如果没有被依赖，那么最晚开始时间 = 最后期限 - 持续时间的时刻
            if (temp == 366)
                latest[i] = n - t[i] + 1;
            // 如果有被依赖，那么最晚开始时间
            // =依赖它的科目的最晚开始的时刻最小的科目 - 本身的持续时间的时刻
            else
                latest[i] = temp - t[i];
        }
        // 输出每项科目的最晚开始时间
        for (int i = 1; i <= m; i++)
            cout << latest[i] << " ";
    }
    return 0;
}