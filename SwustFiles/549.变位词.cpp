#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    string s;
    cin >> s;

    vector<string> str(n), strbac(n);
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    strbac = str;
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = 0; j < s.length(); j++) {
            if (str[i].find(s[j]) != -1) {
                str[i][str[i].find(s[j])] = '0';
            } else if (str[i].find(s[j]) == -1) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            count++;
            cout << strbac[i] << endl;
        }
    }
    cout << count << endl;
    return 0;
}

// answer
//-----------------------------------
//  #include <algorithm>
//  #include <iostream>
//  #include <string>
//  #include <vector>
//  using namespace std;
//  bool judge(string a, string b) {
//      sort(a.begin(), a.end());
//      sort(b.begin(), b.end());
//      return a == b ? true : false;
//  }
//  int main() {
//      string a, b;
//      vector<string> mpt;
//      vector<string>::iterator it;
//      int n, i;
//      cin >> n >> a;
//      for (i = 0; i < n; i++) {
//          cin >> b;
//          if (judge(a, b))
//              mpt.push_back(b);
//      }
//      sort(mpt.begin(), mpt.end());
//      for (it = mpt.begin(); it != mpt.end(); it++)
//          cout << *it << endl;
//      cout << mpt.size() << endl;
//      return 0;
//  }