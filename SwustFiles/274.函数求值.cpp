// #include <iostream>
// using namespace std;
//
// long long calc(long long n) {
//     if (n % 2 != 0) return n;
//     //else {
//     //    while (n % 2 == 0) {
//     //        n /= 2;
//     //    }
//     //    return n;
//     //}
//
//     //也还是timelimit
//     //return calc(n / 2);
//
//     //找到了规律,其实这个规律是一直循环的，把一半摘出来之后，后面的规律是重复的，所以也不能用
//     //else if (n % 4 != 0) {
//     //    return n / 2;
//     //}
//     //else {
//     //    while (n % 2 == 0) n /= 2;
//     //    return n;
//     //}
//     else return n + calc(n / 2);
// }
//
// int main() {
//     long long n;
//     while (cin >> n) {
//         long long re = 0;
//         for (long long i = 1; i <= n; i++) {
//             re += calc(i);
//         }
//         cout << re << endl;
//     }
//     return 0;
// }

#include <stdio.h>
long long f(long long n) {
    if (n == 1)
        return 1;
    else if (n % 2 != 0)
        return (n + 1) * (n + 1) / 4 + f(n / 2);
    else
        return n * n / 4 + f(n / 2);
}
int main() {
    long long n;
    while (scanf("%lld", &n) != EOF) {
        printf("%lld\n", f(n));
    }
    return 0;
}