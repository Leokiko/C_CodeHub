// http://118.190.20.162/view.page?gpid=T179
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
// 获取质数
vector<long long int> sieveOfEratosthenes(long long int n) {
    vector<bool>          isPrime(n + 1, true);
    vector<long long int> primes;

    for (size_t p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (size_t i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

    for (size_t p = 2; p <= n; p++) {
        if (isPrime[p]) {
            primes.push_back(p);
        }
    }

    return primes;  // primes是一个一维vector，里面存放了0-n所有的质数
}

int main() {
    int q;  // 表示有几个查询数
    cin >> q;
    vector<vector<long long int>> a(q, vector<long long int>(2));
    for (int i = 0; i < q; i++) {
        cin >> a[i][0] >> a[i][1];  // 0是查询的数，1是限制素因子 有效 的指数
                                    // （只有不小于1的素因子才保留）
    }
    // 找到所有素因子，并满足指数k要求
    // 首先创建素因子表
    vector<long long int> table(0);
    table = sieveOfEratosthenes(
        1000000);  // 最先测试1000，最后是10000000000是一个足够大的数，能包含所有测试数据
    // 但是并不需要包含到10000000000，因为最开始肯定有2^n

    // 打印table
    // for (int i = 0; i < table.size(); i++) {
    //  cout << table[i] << endl;
    //}

    vector<vector<long long int>> re(
        q,
        vector<long long int>(
            0));  // 限定了q行，但个数为0个，因子使用push_back按需加入
    vector<vector<long long int>> time(
        q);  // 这么创建q行也可以，每行个数为0，使用时按需push_back
             // 并且只保留次方大于k的素因子
    // re和time最终都只创建了行，并没有操作列

    // 开始寻找素因子和次方
    for (int i = 0; i < q; i++) {
        long long int tempRe, tempTime;
        while (a[i][0] > 1) {
            for (size_t j = 0; j < table.size(); j++) {
                if (a[i][0] % table[j] == 0) {
                    tempRe   = table[j];
                    tempTime = 0;
                    while (a[i][0] % table[j] == 0) {
                        a[i][0] /= table[j];
                        tempTime++;
                    }
                    if (tempTime >= a[i][1]) {
                        re[i].push_back(tempRe);
                        time[i].push_back(tempTime);
                    }
                }
            }
        }
    }

    //// check re和time
    // for (int i = 0; i < q; i++) {
    //   for (int j = 0; j < re[i].size(); j++) {
    //     cout << re[i][j] << " " << time[i][j] << endl;
    //   }
    // }

    // 输出答案
    for (int i = 0; i < q; i++) {
        long long int Re = 1;
        for (int j = 0; j < re[i].size(); j++) {
            Re *= pow(re[i][j], time[i][j]);
        }
        cout << Re << endl;
    }
    return 0;
}
