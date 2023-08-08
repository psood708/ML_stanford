#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int count_alp = 0;
    for (int i = 0; i < s.length(); i++) {
        set<char> uniqueChars;
        
        for (int j = i; j < s.length(); j++) {
            uniqueChars.insert(s[j]);
        }
        
        if (uniqueChars.size() == s.length() - i) {
            count_alp++;
        }
    }
    if (count_alp % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    return 0;
}
