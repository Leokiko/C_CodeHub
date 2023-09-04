#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char aa;
        cin >> aa;
        cout << char(aa - 32) << endl;
    }
    return 0;
}
