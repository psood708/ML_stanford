#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
     int n;
     cin>>n;
     int *arr;
     arr = new int[n];
     for(int i =0;i<n;i++){
        cin >> *(arr+i);
     }

     sort(arr,arr+n);
     int sum1 = 0,sum2=*(arr+n-1);
     for(int j = 0; j < n-1; j++){
    sum1 += *(arr+j);
  }

  int i = 1;
  while(i <= n){
    if(sum2 > sum1){
      cout<<i;
      return 0;
    }
    else{
      i++;
      sum2 += *(arr+n-i);
      sum1 -= *(arr+n-i);
    }
  }
    return 0;
}
