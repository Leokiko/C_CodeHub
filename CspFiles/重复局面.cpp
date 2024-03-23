// http :  // 118.190.20.162/view.page?gpid=T170
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;  // 输入n来表示接下来有n步
    // 创建一个二维数组来存储棋盘状态，*表示无棋子，用字母表示棋子
    vector<vector<char>> board(8 * n, vector<char>(8, '0'));
    // 从cin接收n步的输入
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < 8; k++) {
            for (int j = 0; j < 8; j++) {
                cin >> board[i * 8 + k][j];
            }
        }
    }

    // 打印数组
    // for (int i = 0; i < n; i++) {
    //  cout << "第" << i + 1 << "个棋盘" << endl;
    //  for (int k = 0; k < 8; k++) {
    //    for (int j = 0; j < 8; j++) {
    //      cout << board[i * 8 + k][j] << " ";
    //    }
    //    cout << endl;
    //  }
    //  cout << endl;
    //}

    // 判断每个8*8的棋盘是否存在重复的棋子
    // 存储结果并初始化为1
    vector<int> res(n, 1);
    for (int i = n - 1; i >= 0; i--) {
        int re = 1;
        for (int r = i - 1; r >= 0; r--) {
            int flag = 0;
            for (int k = 0; k < 8; k++) {
                for (int j = 0; j < 8; j++) {
                    if (board[i * 8 + k][j] != board[r * 8 + k][j]) {
                        flag = 1;
                    }
                }
            }
            if (!flag) {
                res[i]++;
            }
        }
    }
    // 输出结果
    for (int i = 0; i < n; i++) {
        cout << res[i] << endl;
    }

    return 0;
}
