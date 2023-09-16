// #include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m = 0;
//     cin >> n;
//     vector<int> sum(3, 0); // Initialize sum vector with size 3 and initial values 0
//     vector<vector<int>> a(n, vector<int>(3)); // Initialize a 2D vector of size n x 3

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < 3; j++) {
//             int input;
//             cin >> input;
//             a[i][j] = input;
//         }
//     }

//     for (int i = 0; i < 3; i++) {
//         m = 0;
//         for (int j = 0; j < n; j++) {
//             m += a[j][i];
//         }
//         sum[i] = m;
//     }
//     int sum1 =0;
//     // Print the sum for each column
//     for (int i = 0; i < 3; i++) {
//         sum1+=sum[i];
//      }
//     if(sum1!=0){
//         cout<<"NO";
//     }
//     else{
//         cout<<"YES";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sum_x = 0, sum_y = 0, sum_z = 0;

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        sum_x += x;
        sum_y += y;
        sum_z += z;
    }

    if (sum_x == 0 && sum_y == 0 && sum_z == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

