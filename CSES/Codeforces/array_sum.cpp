// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int q = n;
    int decision[n];
    
    for(int i = 0; i < n; i++){
        cout << "Taking input " << (i + 1) << ": ";
        int m;
        cin >> m;
        int k;
        int sum = 0;
        for(int j = 0; j < m; j++){
            cin >> k;
        
            sum += k;
        }
        if(sum % 2 != 0){
            decision[i] = 1;
        }
        else{
            decision[i] = 0;
        }
    }
    
    for(int j = 0; j < q; j++){ // Fix 1: Change "q > 0" to "j < q"
        if(decision[j] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
