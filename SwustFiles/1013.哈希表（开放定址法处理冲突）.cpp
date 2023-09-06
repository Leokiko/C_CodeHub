// 题目描述
// 从棋盘上两个不相等的正数（M，N和M>N）开始。两名玩家轮流移动。每一步，玩家必须在棋盘上写下一个正数，该数等于棋盘上已有的两个数字的差；该号码必须是新的，即与板上已有的所有号码不同。无法移动的玩家输掉游戏。在这场游戏中你应该选择先走还是后走？
// 根据上述规则，有两名玩家进行游戏。假设A先在黑板上写一个数字，然后B再写
// 你的任务是编写一个程序来判断获胜者是A还是B

// 输入描述:
// 两个不相等的正数M和N，M>N，且M<1000000

// 输出描述:
// 如果A赢，输出“A”，否则输出“B”

// #include <iostream>
// using namespace std;
//
// int main() {
//   int m, n;
//   cin >> m >> n;
//   if ((m - n) % (n + 1) == 0) {
//     cout << "B" << endl;
//   } else {
//     cout << "A" << endl;
//   }
//   return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

// 用除留余数法构造哈希函数
// 要注意哈希表从0开始，所以要加1
void insAdd(int len, int data, int a[]) {
    int add = data % len;
    while (1) {
        if (a[add] == 0) {
            a[add] = data;
            break;
        } else
            add = (add + 1) % len;
    }
}

int main() {
    int listLen;
    cin >> listLen;
    int keyWordsNum;
    cin >> keyWordsNum;
    // 创建一个一维数组，长度为n,并初始化表为0
    int* v = new int[listLen];
    for (int i = 0; i < listLen; i++) {
        v[i] = 0;
    }

    // 输入数据
    int data;
    for (int i = 0; i < keyWordsNum; i++) {
        cin >> data;
        insAdd(listLen, data, v);
    }

    // 输入要查找的数据
    int findData;
    cin >> findData;
    // 查找数据
    int count = 0;
    int add   = findData % listLen;
    while (1) {
        count++;
        if (v[add] == findData) {
            cout << add << "," << count;
            break;
        } else if (v[add] == 0) {
            cout << "-1";
            break;
        } else {
            add = (add + 1) % listLen;
        }
        if (count > (listLen + 10)) {
            cout << "-1";
            break;
        }
    }
    return 0;
}
