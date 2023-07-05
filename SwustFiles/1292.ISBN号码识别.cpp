#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (cin >> str) {
        int sum = 0;
        for (int i = 0; i < str.length() - 1; i++) {
            switch (i) {
            case 0:
                sum += (str[i] - '0') * 1;
                break;
            case 2:
                sum += (str[i] - '0') * 2;
                break;
            case 3:
                sum += (str[i] - '0') * 3;
                break;
            case 4:
                sum += (str[i] - '0') * 4;
                break;
            case 6:
                sum += (str[i] - '0') * 5;
                break;
            case 7:
                sum += (str[i] - '0') * 6;
                break;
            case 8:
                sum += (str[i] - '0') * 7;
                break;
            case 9:
                sum += (str[i] - '0') * 8;
                break;
            case 10:
                sum += (str[i] - '0') * 9;
                break;
            default:
                break;
            }
        }
        sum %= 11;
        if (sum == 10) {
            if (str[str.length() - 1] == 'X') {
                cout << "Right" << endl;
            } else {
                str[str.length() - 1] = 'X';
                cout << str << endl;
            }
        } else {
            if (sum == str[str.length() - 1] - '0') {
                cout << "Right" << endl;
            } else {
                str[str.length() - 1] = sum + '0';
                cout << str << endl;
            }
        }
    }
    return 0;
}