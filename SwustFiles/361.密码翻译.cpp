#include <iostream>
using namespace std;
int main() {
    int k;
    cin >> k;
    double n = 1;
    double sn = 0;
    while (sn <= k) {
        sn += 1 / n;
        n++;
    }
    cout << n - 1 << endl;
    return 0;
}