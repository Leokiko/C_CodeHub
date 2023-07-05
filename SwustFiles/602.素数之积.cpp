#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long *arr = new long long[n];
    long long re = 1;
    int flag = 1, fl = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a;
        cin >> b;
        int min = a < b ? a : b, max = a > b ? a : b;
        for (int j = min; j <= max; j++) {
            // 在这里卡了很久，因为以为1是个素数，结果不是，所以要加上1的判断，[1,1]的时候，答案应该为1]
            if (j == 1)
                continue;
            for (int k = 1; k < j; k++) {
                if (k == 1)
                    continue;
                if (j % k == 0)
                    flag = 0;
            }
            if (flag) {
                re *= j;
                fl = 1;
            }
            flag = 1;
        }
        if (fl)
            // cout << re << endl;
            arr[i] = re;
        else
            // cout << 0 << endl;
            arr[i] = 0;
        re = 1;
        fl = 0;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}