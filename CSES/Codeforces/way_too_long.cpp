#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for (int j = 0; j < n; j++) {
        if (str[j].length() > 10) {
            cout << str[j][0] << str[j].length() - 2 << str[j][str[j].length() - 1] << endl;
        } else {
            cout << str[j] << endl;
        }
    }
    return 0;
}
