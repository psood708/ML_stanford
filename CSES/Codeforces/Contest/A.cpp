// #include<bits/stdc++.h>
// #include<string>

// using namespace std;
// #define MAX_INT 100


// bool checker1(char arr[][],int l,int b){
//     // now we have to test the cases vika will be true
//     // bool check_valid = false;
//     string checker = "vika";
//     int check = 0;
//     while(l--){
//         int i = 0,j=0;
//          while(b--){
//             if(checker[check] == arr[i][j]){
//                 check++;
//                 j++;
//             }
//             else{
//                 i++;
//             }
//         }
//         if(i==4){
//             return true;
//         }
//     }
// }
// int main(){

//     int tcase;
//     string checker = "";
//     cin>>tcase;

//     for(int i =0;i<tcase;i++){
//         // we'll input the dimension of the carpet  
//         int l,b;
//         cin>>l>>b;
//         char arr[l][b];
//         for(int j = 0;j<l;j++){
//             for (int k = 0;k<b;k++){
//                 cin>>arr[j][k];
//             }   
//         }
//         bool np = checker1(arr,l,b);
//         if(np){
//             cout<<"YES"<<endl;
//         }
//         else{
//             cout<<"NO"<<endl;
//         }


//     }



//     return 0;
    
// }
#include <bits/stdc++.h>
using namespace std;

#define MAX_INT 100

bool checker1(char arr[][MAX_INT], int l, int b) {
    string checker = "vika";
    for (int i = 0; i < l; i++) {
        for (int j = 0; j < b; j++) {
            int check = 0;
            int ii = i, jj = j;
            while (check < 4 && ii < l && jj < b) {
                if (checker[check] == arr[ii][jj]) {
                    check++;
                    jj++;
                } else {
                    ii++;
                }
            }
            if (check == 4) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int tcase;
    cin >> tcase;

    vector<string> results; // Store results in a vector

    for (int i = 0; i < tcase; i++) {
        int l, b;
        cin >> l >> b;
        char arr[MAX_INT][MAX_INT];
        for (int j = 0; j < l; j++) {
            for (int k = 0; k < b; k++) {
                cin >> arr[j][k];
            }
        }
        bool np = checker1(arr, l, b);
        if (np) {
            results.push_back("YES");
        } else {
            results.push_back("NO");
        }
    }

    // Display the results
    for (const string &result : results) {
        cout << result << endl;
    }

    return 0;
}

