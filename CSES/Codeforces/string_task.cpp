#include<bits/stdc++.h>
 
#include <cctype>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0;i<s.length();i++){
        if(s[i] == 'A' || s[i] == 'a' || s[i] == 'O' || s[i] == 'o' || s[i] == 'Y' || s[i] == 'y' || s[i] == 'E' || s[i] == 'e' || s[i] == 'U' || s[i] == 'u' || s[i] == 'I' || s[i] == 'i'){
            s.erase(i,1);
            i--;
        }
        else{
            s[i] = tolower(s[i]);
            s.insert(i,".");
            i++;
        }
    }
    cout<<s;
}