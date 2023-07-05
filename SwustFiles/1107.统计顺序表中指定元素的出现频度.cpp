#include <iostream>
int main() {
    int n, find;
    int flag = 0;
    int a[1000] = {0};
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cin >> find;
    for (int i = 0; i < n; i++) {
        if (a[i] == find) {
            flag++;
        }
    }
    std::cout << flag;
    return 0;
}