#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
     for (int j = 0;j<n;j++){
        if( arr[j] >= arr[k-1] && arr[j]!= 0){
            count++;
        }
    }
    cout<<count;
    return 0;
}

// two integers n and k (1<k<n<50) seperated by single space