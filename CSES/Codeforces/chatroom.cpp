#include <iostream>
// #include <string>
#include <regex>
using namespace std;

int main(){
    string inputStr;
    cin>>inputStr;
    regex pattern("h+e+l+l+o+");
    if(regex_search(inputStr,pattern)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}