#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int i, j;
    cin >> i;
    cin >> j;
    int max = i > j ? i : j;
    int *arr1 = new int[max];
    int *arr2 = new int[max];
    int *arr3 = new int[max];

    for (int ii = 0; ii < max; ii++) {
        arr1[ii] = 0;
    }
    for (int jj = 0; jj < max; jj++) {
        arr2[jj] = 0;
    }

    for (int ii = i - 1; ii >= 0; ii--) {
        cin >> arr1[ii];
    }
    for (int jj = j - 1; jj >= 0; jj--) {
        cin >> arr2[jj];
    }
    // reverse(arr1, arr1 + i);
    // reverse(arr2, arr2 + j);
    int flag = 0;
    for (int ii = 0; ii < max; ii++) {
        if (flag) {
            if (arr1[ii] + arr2[ii] + flag < 10) {
                arr3[ii] = arr1[ii] + arr2[ii] + flag;
                flag = 0;
            } else {
                arr3[ii] = arr1[ii] + arr2[ii] + flag - 10;
            }
        } else {
            if (arr1[ii] + arr2[ii] >= 10) {
                arr3[ii] = arr1[ii] + arr2[ii] - 10;
                flag = 1;
            } else {
                arr3[ii] = arr1[ii] + arr2[ii];
            }
        }
    }
    reverse(arr3, arr3 + max);
    if (flag)
        cout << 1;
    for (int i = 0; i < max; i++)
        cout << arr3[i];
    cout << endl;
    return 0;
}