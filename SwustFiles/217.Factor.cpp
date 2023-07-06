// origin solve

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     for (int ii = 0; ii < n; ii++) {
//         int a, b;
//         cin >> a >> b;
//         int flag = 0;
//         int max = 0;
//         int re;
//         // 寻找有最多公因子的数
//         for (int i = a; i <= b; i++) {
//             cout << i << endl;
//             for (int j = 1; j <= i; j++) {
//                 if (i % j == 0) {
//                     flag++;
//                 }
//             }
//             if (flag > max) {
//                 max = flag;
//                 re = i;
//             }
//             flag = 0;
//         }
//         cout << re << endl;
//     }
//     return 0;
// }

// 给定一个数，如N=10，我们知道它有如下4个因子：1、2、5、10。现在的问题来了：给你一个区间[A,B]，通过编程求出该区间内具有最多因子的那个数，如果有多个具有最多因子的数，输出最小的那个数。
// 输入
// 第1行：1个数T，表示后面用作输入测试的数的数量。（1 <= T <= 20）
// 第2 - T + 1行：每行2个数A，B，表示需要处理的区间的两个端点。（1 <= A <= B <= 1000000) 
// 输出
// 共T行，每行1个数，表示对应区间内具有最多因子的那个数。

// 样例输入
// 2
// 1 10
// 100 200
// 样例输出
// 6
// 120

// 提示
// 对于100
// 200，具有最多因子的数有：120、180、200，其中最小的是120，所以输出120。 对于1
// 10，具有最多因子的数有：6、8、10，其中最小的是6，所以输出6。

// 来源2012年北京市大学生程序设计竞赛
#include <cmath>
#include <iostream>
using namespace std;

int countFactors(int num) {
    int count = 0;
    int sqrtNum = sqrt(num);
    for (int i = 1; i <= sqrtNum; i++) {
        if (num % i == 0) {
            count += 2; // 计算因子和对应的配对因子
        }
    }
    if (sqrtNum * sqrtNum == num) {
        count--; // 如果是完全平方数，减去重复计数的情况
    }
    return count;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B;
        cin >> A >> B;
        int maxCount = 0;
        int maxNum = 0;
        for (int i = B; i >= A; i--) {
            int count = countFactors(i);
            if (count > maxCount) {
                maxCount = count;
                maxNum = i;
            }
        }
        cout << maxNum << endl;
    }
    return 0;
}
