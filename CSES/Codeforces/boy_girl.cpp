// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;
//     int count = 0;
//     int count_alp = 0;
//     set<char> a;
//     for (int i = 0; i < s.length(); i++)
//     {
//         a.insert(s[i]);
//         // count = 0;

//         if (count == s.length() - 2)
//         {
//             count_alp += 1;
//         }
//         cout << count_alp << endl;
//     }
//     for (int j = 0; j < s.length(); j++)
//     {
//         for (int i = 0; i < s.length(); i++)
//         {
//             if (a[j] != s[i])
//             {
//                count++;
//             }
//         }
//         if (count == s.length() -1 ){
//             count_alp +=1;
//         }
//     }

//     if (count_alp % 2 == 0)
//     {
//         cout << count_alp << endl;
//         cout << "CHAT WITH HER!";
//     }
//     else
//     {
//         cout << "IGNORE HIM!";
//     }
//     return 0;
// }
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> uniqueChars;
    for (char c : s)
    {
        uniqueChars.insert(c);
    }

    int count_alp = uniqueChars.size();  // Count of unique characters

    if (count_alp % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
