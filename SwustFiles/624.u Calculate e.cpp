#include <iomanip>
#include <iostream>
using namespace std;

double fun(double n) {
    if (n == 1) {
        return 1;
    } else {
        return n * fun(n - 1);
    }
}

int main() {
    cout << 'n' << " ";
    cout << 'e' << endl;
    cout << '-' << " ";
    cout << "-----------" << endl;
    cout << '0' << " ";
    cout << "1.000000000" << endl;

    double re = 1.000000000;
    for (int i = 1; i <= 9; i++) {
        re += 1 / fun(i);
        cout << i << " ";
        // 保留9位小数
        cout << fixed << setprecision(9) << re << endl;
    }
    return 0;
}
