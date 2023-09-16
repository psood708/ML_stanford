// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// bool allupper(string s)
// {
//     // cout<<"hello entered the all uppper"<<endl;
//     // bool allCaps = false;
//     int len = s.length();
//      int count = 0;
//     for (int i = 0; i < len; i++)
//     {
//         if (toupper(s[i]) == s[i])
//         {
//             // cout<<count<<" ";
//             count++;
//         }
//     }
//     if (count == len)
//     {
//         // allCaps = true;
//         // cout<<"Test case 1 passed"<<endl;
//         return true;
//     }
//     else{return false;}
// }

// bool firstlower(string s)
// {

//     // cout<<"hello entered the firstlower"<<endl;

//     int count = 0;
//     int len = s.length();
//     for (int i = 0; i < len; i++)
//     {
//         if (s[0] == _tolower(s[0]))
//         {
//             // cout<<count<<" ";
//             count++;
//         }
//         if(i>=1){
//             if (s[i] == toupper(s[i]))
//             {
//                 // cout<<count<<" ";
//                 count++;
//             }
//         }
        
//     }
//     // cout<<endl;
//     if (count == len-1)
//     {
//         //  cout<<"Test case 2 passed"<<endl;
//         return true;
//     }
//     else{return false;}
  
// }

// int main()
// {
//     string s;
//     cin >> s;
//     int len = s.length();
//     if (allupper(s) || firstlower(s))
//     {
//         // cout<<"Hello I reached here!"<<endl;
//         if (s[0] == tolower(s[0]))
//         {
//             s[0] = toupper(s[0]);
//         }

//         for (int i = 1; i < len; i++)
//         {
//             if (s[i] == toupper(s[i]))
//             {
//                 s[i] = tolower(s[i]);
//                 // cout<<"Hello I reached here!"<<endl;
//             }
//         }
//     }

//     cout << s << endl;  

//     return 0;
// }s

// // cAPSlOCK


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool allupper(string s) {
    for (char c : s) {
        if (islower(c)) {
            return false;
        }
    }
    return true;
}

bool firstlower(string s) {
    return islower(s[0]) && allupper(s.substr(1));
}

int main() {
    string s;
    cin >> s;

    if (allupper(s) || firstlower(s)) {
        if (islower(s[0])) {
            s[0] = toupper(s[0]);
        } else {
            s[0] = tolower(s[0]);
        }

        for (int i = 1; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }
    }

    cout << s << endl;

    return 0;
}
