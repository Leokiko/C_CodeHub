// #include <iostream>
// #include <vector>
// using namespace std;

// void checkdata(int &a) {
//     if (a == 10)
//         a = 0;
// }

// // 创建边界数组
// int boder[4][2] = {0};
// bool checkboder() {
//     if ((boder[0][0] != boder[1][0] || boder[0][0] != boder[2][0] ||
//          boder[0][0] != boder[3][0]) ||
//         (boder[0][1] != boder[1][1] || boder[0][1] != boder[2][1] ||
//          boder[0][1] != boder[3][1]))
//         return true;
// }

// bool checkcount(int &a, int &b) {
//     if (a == b)
//         return true;
//     else
//         return false;
// }

// int main() {
//     int n, m;
//     // data为要填充的数据，flag为方向标志，1为向右，2为向下，3为向左，4为向上
//     int data = 0, flag = 1;
//     cin >> n >> m;

//     // 左上
//     boder[0][0] = 1;
//     boder[0][1] = 0;
//     // 右上
//     boder[1][0] = 0;
//     boder[1][1] = m - 1;
//     // 左下
//     boder[2][0] = n - 1;
//     boder[2][1] = 0;
//     // 右下
//     boder[3][0] = n - 1;
//     boder[3][1] = m - 1;

//     // 创建一个n*m的二维数组，并初始化为0
//     vector<vector<int>> a(n, vector<int>(m));
//     for (int i = 0; i < n; i++)
//         for (int j = 0; j < m; j++)
//             a[i][j] = 0;

//     // 统计未赋值的个数，用来判定最后一个boder的位置
//     int count = n * m;
//     //
//     使用count1来计数，当count1==count时，说明需要平齐设置boder，而非对角线设置
//     int count1 = 0;
//     int i = 0, j = 0;
//     while (1) {
//         count1++;
//         if (flag == 4) {
//             if (checkcount(count, count1)) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 break;
//             }
//             if (!(i == boder[0][0] && j == boder[0][1])) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 i--;
//             } else {
//                 flag = 1;
//                 boder[0][0]++;
//                 boder[0][1]++;
//                 checkdata(data);
//                 a[i][j] = data++;
//                 j++;
//             }
//         }
//         if (flag == 3) {
//             if (checkcount(count, count1)) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 break;
//             }
//             if (!(i == boder[2][0] && j == boder[2][1])) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 j--;
//             } else {
//                 flag = 4;
//                 boder[2][0]--;
//                 boder[2][1]++;
//                 checkdata(data);
//                 a[i][j] = data++;
//                 i--;
//             }
//         }
//         if (flag == 2) {
//             if (checkcount(count, count1)) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 break;
//             }
//             if (!(i == boder[3][0] && j == boder[3][1])) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 i++;
//             } else {
//                 flag = 3;
//                 boder[3][0]--;
//                 boder[3][1]--;
//                 checkdata(data);
//                 a[i][j] = data++;
//                 j--;
//             }
//         }
//         if (flag == 1) {
//             if (checkcount(count, count1)) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 break;
//             }
//             if (!(i == boder[1][0] && j == boder[1][1])) {
//                 checkdata(data);
//                 a[i][j] = data++;
//                 j++;
//             } else {
//                 flag = 2;
//                 boder[1][0]++;
//                 boder[1][1]--;
//                 checkdata(data);
//                 a[i][j] = data++;
//                 i++;
//             }
//         }

//         //// 打印a数组
//         // for (int i = 0; i < n; i++) {
//         //   for (int j = 0; j < m; j++)
//         //     cout << a[i][j] << " ";
//         //   cout << endl;
//         // }
//         //// 打印边界数组
//         // cout << "boder:" << endl;
//         // for (int i = 0; i < 4; i++) {
//         //   for (int j = 0; j < 2; j++)
//         //     cout << boder[i][j] << " ";
//         //   cout << endl;
//         // }
//         // cout << endl;
//     }
//     // 打印a数组
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }
//     return 0;
// }

// 忽略VS的scanf错误
#define _CRT_SECURE_NO_WARNINGS

#include <math.h>
#include <stdio.h>
#include <string.h>
int main() {
    int n, m;
    int a[100][100];   // 用来存数据
    int vis[100][100]; // 判断每个点是否走过
    int p = 0;
    while (scanf("%d %d", &n, &m) != EOF) // n行m列
    {
        if (p != 0) // 格式要求每两组测试数据之间有一个空行。
            printf("\n");
        int count = 1; // 统计标记点的个数
        int temp = 0;
        int x, y;                    // 用来标识遍历到何处
        x = 0, y = 0;                // 从（0，0）这个点开始
        memset(vis, 0, sizeof(vis)); // 数组初始化函数
        a[x][y] = temp;              // 标记第一个数
        vis[x][y] = 1;
        while (count < n * m) // 当标记点个数>n*m之后，对数组处理完成，跳出循环
        {
            while (y + 1 < m && !vis[x][y + 1]) // 先向右走
            {
                temp++;
                if (temp > 9) // 如果temp>9  则temp=0
                    temp = 0;
                a[x][++y] = temp;
                vis[x][y] = 1; // 标记此点走过
                count++;
            }
            while (x + 1 < n && !vis[x + 1][y]) // 想下走
            {
                temp++;
                if (temp > 9)
                    temp = 0;
                a[++x][y] = temp;
                vis[x][y] = 1;
                count++;
            }
            while (y - 1 >= 0 && !vis[x][y - 1]) // 向左走
            {
                temp++;
                if (temp > 9)
                    temp = 0;
                a[x][--y] = temp;
                vis[x][y] = 1;
                count++;
            }
            while (x - 1 >= 0 && !vis[x - 1][y]) // 向上走
            {
                temp++;
                if (temp > 9)
                    temp = 0;
                a[--x][y] = temp;
                vis[x][y] = 1;
                count++;
            }
        }
        for (int i = 0; i < n; i++) // 最后输出就可以了
        {
            for (int j = 0; j < m; j++) {
                printf("%d", a[i][j]);
            }
            printf("\n");
        }
        p = 1;
    }
    return 0;
}

//---------------------------------------------------------------------
// 3.0
#include <iostream>
#include <vector>
using namespace std;

void checkdata(int &a) {
    if (a == 10)
        a = 0;
}

// 设定循环与走的步数之间的关系
int circlestep(int circle, int flag, int n, int m) {
    if (flag == 1) {
        return m - 2 * (circle - 1);
    } else if (flag == 2) {
        return n - 2 * (circle - 1) - 1;
    } else if (flag == 3) {
        return m - 2 * (circle - 1) - 1;
    } else if (flag == 4) {
        return n - 2 * circle;
    }
}

// 创建边界数组
// int boder[4][2] = {0};
// bool checkboder() {
//  if ((boder[0][0] != boder[1][0] || boder[0][0] != boder[2][0] ||
//       boder[0][0] != boder[3][0]) ||
//      (boder[0][1] != boder[1][1] || boder[0][1] != boder[2][1] ||
//       boder[0][1] != boder[3][1]))
//    return true;
//}

// bool checkcount(int &a, int &b) {
//   if (a == b)
//     return true;
//   else
//     return false;
// }

int main() {
    int n, m;
    // data为要填充的数据(0-9的循环)，flag为方向标志，1为向右，2为向下，3为向左，4为向上
    int data = 0, flag = 1;
    while (cin >> n >> m) {
        if (n == 0 && m == 0)
            break;

        //// 左上
        // boder[0][0] = 1;
        // boder[0][1] = 0;
        //// 右上
        // boder[1][0] = 0;
        // boder[1][1] = m - 1;
        //// 左下
        // boder[2][0] = n - 1;
        // boder[2][1] = 0;
        //// 右下
        // boder[3][0] = n - 1;
        // boder[3][1] = m - 1;

        // 创建两个n*m的二维数组，并初始化

        //---------------------------------------
        // 这里用不上，因为并没有使用边界数组，而是使用循环次数来控制方向

        vector<vector<int>> a(n, vector<int>(m));
        // vector<vector<int>> b(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++) {
                a[i][j] = 0;
                // b[i][j] = 1;
            }

        // 计算总共要填充的数据个数，设定跳出条件
        int countAll = n * m;
        // 不使用边界数组，使用循环次数来控制方向
        int circle = 1;

        int i = 0, j = 0, count = 0;
        while (count < countAll) {
            if (flag == 4) {
                for (int ii = 0; ii < circlestep(circle, flag, n, m); ii++) {
                    checkdata(data);
                    a[i][j] = data++;
                    i--;
                }
                count += circlestep(circle, flag, n, m);
                flag = 1;
                circle++;
                i++;
                j++;
            }
            if (flag == 3) {
                for (int ii = 0; ii < circlestep(circle, flag, n, m); ii++) {
                    checkdata(data);
                    a[i][j] = data++;
                    j--;
                }
                count += circlestep(circle, flag, n, m);
                flag = 4;
                i--;
                j++;
            }
            if (flag == 2) {
                for (int ii = 0; ii < circlestep(circle, flag, n, m); ii++) {
                    checkdata(data);
                    a[i][j] = data++;
                    i++;
                }
                count += circlestep(circle, flag, n, m);
                flag = 3;
                i--;
                j--;
            }
            if (flag == 1) {
                for (int ii = 0; ii < circlestep(circle, flag, n, m); ii++) {
                    checkdata(data);
                    a[i][j] = data++;
                    j++;
                }
                count += circlestep(circle, flag, n, m);
                flag = 2;
                i++;
                j--;
            }

            //// 打印a数组
            // for (int i = 0; i < n; i++) {
            //   for (int j = 0; j < m; j++)
            //     cout << a[i][j] << " ";
            //   cout << endl;
            // }
            //// 打印边界数组
            // cout << "boder:" << endl;
            // for (int i = 0; i < 4; i++) {
            //   for (int j = 0; j < 2; j++)
            //     cout << boder[i][j] << " ";
            //   cout << endl;
            // }
            // cout << endl;
        }
        // 打印a数组
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << a[i][j];
            cout << endl;
        }
    }
    return 0;
}
