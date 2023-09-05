#include <iostream>
#include <vector>
using namespace std;

// 用除留余数法构造哈希函数
int getAdd(int len, int data, int a[]) {
    int add = data % len;
    while (1) {
        if (a[add] == 0) {
            a[add] = data;
            break;
        } else
            add = (add + 1) % len;
    }
    return add;
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
        getAdd(listLen, data, v);
    }
    // 输入要查找的数据
    int findData;
    cin >> findData;
    // 查找数据
    int count = 0;
    while (1) {
        count++;
        int add = findData % listLen;
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
