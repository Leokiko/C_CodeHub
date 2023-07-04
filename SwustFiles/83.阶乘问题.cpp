#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long re = 1;
    for (int i = 1; i < n + 1; i++) {
        re *= i;
        while (re % 10 == 0)
            re /= 10;
        re %= 1000000;
    }
    printf("%d\n", re % 10);
    return 0;
}